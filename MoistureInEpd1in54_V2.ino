//墨水屏显示
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "imagedata.h"
#include <stdlib.h>
//土壤湿度传感器
#include "SoilMoisture.h"
//空气温湿度传感器
#include "DHT.h"
//wifi
#include <WiFiManager.h>
//iot 连接阿里云
#include <ArduinoJson.h>
#include <AliyunIoTSDK.h>
AliyunIoTSDK iot;

//温湿度传感器pin脚和型号设置
#define DHTPIN 3
#define DHTTYPE DHT22 

//连接阿里云的产品三元素
#define PRODUCT_KEY "a1pZWJQ5QFI"
#define DEVICE_NAME "plant_env_001"
#define DEVICE_SECRET "ea832e7f37d81e5e3cb17273b2efd57b"
#define REGION_ID "cn-shanghai"


//值初始化
int old_moisture = 0;
int cur_moisture = 0;

float old_humidity = 0.0;
float old_temperature = 0.0;
float cur_humidity = 0.0;
float cur_temperature = 0.0;

static WiFiClient espClient;

DHT dht(DHTPIN, DHTTYPE);

UBYTE *BlackImage;

/* Entry point ----------------------------------------------------------------*/
void setup()
{
  //串口初始化
  Serial.begin(9600);

  //wifi初始化
  WiFiManager wm;

  bool res;
  // res = wm.autoConnect(); // auto generated AP name from chipid
  // res = wm.autoConnect("AutoConnectAP"); // anonymous ap
  res = wm.autoConnect("AutoConnectAP","123456"); // password protected ap

  if(!res) {
      Serial.println("Failed to connect");
      // ESP.restart();
  } 
  else {
      //if you get here you have connected to the WiFi    
      Serial.println("connected...yeey :)");
  }


#if 0
  AliyunIoTSDK::begin(espClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET, REGION_ID);

    // 绑定属性回调
  AliyunIoTSDK::bindData("PowerSwitch", powerCallback);

    // 操作用户自定义Topic
  AliyunIoTSDK::subscribeUser("/get", callback);
#else
  iot.begin(espClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET, REGION_ID);
  iot.bindData("PowerSwitch", powerCallback);
  iot.subscribeUser("/get", callback);
#endif

  //空气温湿度初始化
  dht.begin();
  DEV_Delay_ms(2000);

  //土壤湿度
  cur_moisture = getSoilMoistureStatus();
  cur_humidity = dht.readHumidity();
  cur_temperature = dht.readTemperature();

  old_moisture = cur_moisture;
  old_humidity = cur_humidity;
  old_temperature = cur_temperature;

  printf("EPD_1IN54_test v2 Demo moisture %d\r\n",cur_moisture);
  DEV_Module_Init();

  initEpd();

  updateEpd(cur_moisture, cur_humidity, cur_temperature);
#if 1
  switch(cur_moisture)
  {
    case VERYDRY:
      iot.send("plant_moisture", "非常干燥");
    case DRY:
      iot.send("plant_moisture", "干燥");
    case VERYWET:
      iot.send("plant_moisture", "非常湿润");
    case WET:
      iot.send("plant_moisture", "湿润");
    }

  iot.send("humidity", cur_humidity);
  iot.send("temperature", cur_temperature);
  #endif
}

unsigned long lastMsMain = 0;
/* The main loop -------------------------------------------------------------*/
void loop()
{

  int count = 0;
  cur_moisture = getSoilMoistureStatus();

  iot.loop();

  if(cur_moisture != old_moisture)
  {
    //更新墨水屏植物状态
    old_moisture = cur_moisture;
    partUpdateMoisture(cur_moisture);
#if 1
    //mqtt更新温度
    switch(cur_moisture)
    {
      case VERYDRY:
        iot.send("plant_moisture", "非常干燥");
      case DRY:
        iot.send("plant_moisture", "干燥");
      case VERYWET:
        iot.send("plant_moisture", "非常湿润");
      case WET:
        iot.send("plant_moisture", "湿润");
    }
#endif   
    //如果dry，就启动pump
    if((cur_moisture == VERYDRY) || (cur_moisture == DRY))
    {
      //启动抽水
    }
  }

 // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  cur_humidity = dht.readHumidity();
  // Read temperature as Celsius (the default)
  cur_temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(cur_humidity) || isnan(cur_temperature)) {
    printf("Failed to read from DHT sensor!\r\n");
    return;
  }

  //printf("%f %f %f %f\r\n", cur_humidity, cur_temperature, old_humidity, old_temperature);

  if(abs(cur_humidity - old_humidity) > 0.1)
  {
    //更新墨水屏状态
    old_humidity = cur_humidity;
    partUpdateHumidity(cur_humidity);

    //mqtt更新湿度
    iot.send("humidity", cur_humidity);
  }

  if(abs(cur_temperature - old_temperature) > 0.1)
  {
    //更新墨水屏状态
    old_temperature = cur_temperature;
    partUpdateTemperature(cur_temperature);

    //mqtt更新温度
    iot.send("temperature", cur_temperature);
  }
  
  count ++;

  if(count == 100)
    updateEpd(cur_moisture, cur_humidity, cur_temperature);

  delay(5000);

#if 0
      AliyunIoTSDK::loop();
    if (millis() - lastMsMain >= 5000)
    {
        lastMsMain = millis();
        // 发送事件到阿里云平台
        AliyunIoTSDK::sendEvent("xxx"); 
        // 发送模型属性到阿里云平台
        AliyunIoTSDK::send("temperature", cur_temperature);
        AliyunIoTSDK::send("humidity", cur_humidity);
    }

#endif

}

void callback(JsonVariant p)
{
    Serial.println("custom topic callback");
    serializeJsonPretty(p, Serial);
    Serial.println();
}

void powerCallback(JsonVariant p)
{
    int PowerSwitch = p["PowerSwitch"];
    if (PowerSwitch == 1)
    {
        //
    }
    else
    {
        //
    }
}

void initEpd()
{
    printf("e-Paper Init and Clear...\r\n");
    EPD_1IN54_V2_Init();
    EPD_1IN54_V2_Clear();
    DEV_Delay_ms(500);

    UWORD Imagesize = ((EPD_1IN54_V2_WIDTH % 8 == 0)? (EPD_1IN54_V2_WIDTH / 8 ): (EPD_1IN54_V2_WIDTH / 8 + 1)) * EPD_1IN54_V2_HEIGHT;
    if((BlackImage = (UBYTE *)malloc(Imagesize)) == NULL) {
        printf("Failed to apply for black memory...\r\n");
        while(1);
    }
    printf("Paint_NewImage\r\n");
    Paint_NewImage(BlackImage, EPD_1IN54_V2_WIDTH, EPD_1IN54_V2_HEIGHT, 270, WHITE);
}

void updateEpd(int cur_moisture, float cur_humidity, float cur_temperature)
{
  printf("e-Paper Init and Clear...\r\n");
  EPD_1IN54_V2_Init();
  EPD_1IN54_V2_Clear();
  DEV_Delay_ms(500);


    //1.Select Image
    Paint_SelectImage(BlackImage);
    Paint_Clear(WHITE);
    
    //温湿度显示在墨水屏上
    char humidity_str[64] = {0};
    char temperature_str[64] = {0};

    memset(humidity_str, 0, sizeof(humidity_str));
    memset(temperature_str, 0, sizeof(temperature_str));

    sprintf(humidity_str,"%.2f%",cur_humidity);
    sprintf(temperature_str, "%.2f", cur_temperature);
    
    Paint_DrawString_CN(5, 8, "湿度：", &Font24CN, BLACK, WHITE);
    Paint_DrawString_EN(5+Font24CN.Width*3, 15, humidity_str, &Font24, WHITE, BLACK);
    Paint_DrawString_CN(5, 8+ Font24CN.Height, "温度：", &Font24CN, BLACK, WHITE);
    Paint_DrawString_EN(5+Font24CN.Width*3, 15+ Font24CN.Height, temperature_str, &Font24, WHITE, BLACK);

    if((cur_moisture == DRY) || (cur_moisture == VERYDRY))
      Paint_DrawImage(gImage_cry,120,120,80,80);
    else if((cur_moisture == VERYWET) || (cur_moisture == WET))
      Paint_DrawImage(gImage_smile,120,120,80,80); 

    EPD_1IN54_V2_Display(BlackImage);
    DEV_Delay_ms(2000);

    //printf("Goto Sleep...\r\n");
    //EPD_1IN54_V2_Sleep();

}

void partUpdateMoisture(int cur_moisture)
{
    // The image of the previous frame must be uploaded, otherwise the
    // first few seconds will display an exception.
    //EPD_1IN54_V2_Init();
    EPD_1IN54_V2_DisplayPartBaseImage(BlackImage);
    EPD_1IN54_V2_Init_Partial();
    printf("Partial refresh1\r\n");
    Paint_SelectImage(BlackImage);
    
    Paint_ClearWindows(120, 120, 200, 200, WHITE);

    if((cur_moisture == DRY) || (cur_moisture == VERYDRY))
      Paint_DrawImage(gImage_cry,120,120,80,80);
    else if((cur_moisture == VERYWET) || (cur_moisture == WET))
      Paint_DrawImage(gImage_smile,120,120,80,80); 

    EPD_1IN54_V2_DisplayPart(BlackImage);
    DEV_Delay_ms(500);//Analog clock 1s
}

void partUpdateHumidity(float cur_humidity)
{

    char humidity_str[64] = {0};
    memset(humidity_str, 0, sizeof(humidity_str));

    sprintf(humidity_str,"%.2f%",cur_humidity);

    // The image of the previous frame must be uploaded, otherwise the
    // first few seconds will display an exception.
    //EPD_1IN54_V2_Init();
    EPD_1IN54_V2_DisplayPartBaseImage(BlackImage);
    EPD_1IN54_V2_Init_Partial();
    printf("Partial refresh2\r\n");
    Paint_SelectImage(BlackImage);
    
    Paint_ClearWindows(5+Font24CN.Width*3, 15, 5+Font24CN.Width*3+ Font24.Width * 5, 15+Font24.Height, WHITE);

    Paint_DrawString_EN(5+Font24CN.Width*3, 15, humidity_str, &Font24, WHITE, BLACK);

    EPD_1IN54_V2_DisplayPart(BlackImage);
    DEV_Delay_ms(500);//Analog clock 1s
}

void partUpdateTemperature(float cur_temperature)
{
    char temperature_str[64] = {0};
    memset(temperature_str, 0, sizeof(temperature_str));
    sprintf(temperature_str, "%.2f", cur_temperature);

    //EPD_1IN54_V2_Init();
    EPD_1IN54_V2_DisplayPartBaseImage(BlackImage);
    EPD_1IN54_V2_Init_Partial();
    printf("Partial refresh3\r\n");
    Paint_SelectImage(BlackImage);
    
    Paint_ClearWindows(5+Font24CN.Width*3, 15+ Font24CN.Height, 5+Font24CN.Width*3+ Font24.Width * 5, 15+Font24CN.Height+Font24.Height, WHITE);

    Paint_DrawString_EN(5+Font24CN.Width*3, 15+ Font24CN.Height, temperature_str, &Font24, WHITE, BLACK);

    EPD_1IN54_V2_DisplayPart(BlackImage);
    DEV_Delay_ms(500);//Analog clock 1s
    
}