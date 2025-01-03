/*****************************************************************************
* | File      	:   ImageData.c
* | Author      :   Waveshare team
* | Function    :	
*----------------
* |	This version:   V1.1
* | Date        :   2019-06-12
* | Info        :
*
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

******************************************************************************/

#include "ImageData.h"

const unsigned char gImage_1in54[5000] = { /* 0X00,0X01,0XC8,0X00,0XC8,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFE,0X01,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,
0X3F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XF0,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XFE,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XF0,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE3,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,
0XE0,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0X9F,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XE1,0XE3,0X00,0X00,0X00,0X00,0X01,
0XFF,0XFF,0XE7,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF1,0XC3,0XF3,0X0F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XE3,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XC3,0X3B,0X0F,0XFF,0XFF,
0XFF,0XFE,0XFF,0XFF,0XE3,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF1,0XC3,0X0F,0X0F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XE1,0XFE,0X1F,
0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XC3,0X0F,0X0F,
0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XF0,0XFC,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XE3,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XC3,0X87,0X0F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XF0,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XE0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF1,0XC1,
0X03,0X0F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X8F,
0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,0XF1,0XE0,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0XFF,
0XFF,0XFE,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,
0XF1,0XE0,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0XFF,0XFF,0X80,0X7F,0XFF,0XFF,0XFF,0XF1,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,
0X7E,0XFF,0XFF,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XF0,0X1F,0XFF,
0XFF,0XFF,0XF1,0XF8,0X00,0X7F,0XFF,0XFF,0XFC,0X3E,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0X00,0X1F,0XFF,0XFF,0XFF,0XF1,0XFE,0X00,0XFF,0XFF,
0XFF,0XF0,0X3E,0XFF,0XFF,0XC6,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XF8,0X07,
0X8F,0XFF,0XFF,0XFF,0XF1,0XFE,0X87,0XFF,0XFF,0XFF,0XE0,0XCE,0XFF,0XFF,0XCE,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XE0,0X1F,0X8F,0XC0,0X07,0XFF,0XF1,0XFE,0XFF,
0XFF,0XFF,0XFF,0X81,0X86,0XFF,0XFF,0XCE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XE0,0XFF,0XCF,0X80,0X07,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0X02,0X06,0XFF,0XFF,
0XC6,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XE3,0XFF,0XEF,0X00,0X07,0XFF,0XF1,
0XFE,0XFF,0XFF,0XFF,0XFE,0X0C,0X02,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFE,0X18,0X02,
0XFF,0XFF,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,
0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFE,0X20,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFE,0X01,0XFF,0X1F,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFE,
0XC0,0X02,0XFF,0XFF,0XFF,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XF0,0X01,0XFF,
0X9F,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0X00,0X02,0XFF,0XFF,0XF8,0X00,0X7F,
0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XE0,0X01,0XE0,0X80,0X0F,0XFF,0XF1,0XFE,0XFF,0XFF,
0XFF,0XFF,0X00,0X02,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XE7,0XFF,0XFF,0X8F,0XFF,0XE0,
0X03,0XE0,0X00,0X07,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0X80,0X06,0XFF,0XFF,0XE0,
0XCC,0X1F,0XFF,0XE0,0XFF,0XFF,0X8F,0XFF,0XE2,0X71,0XE0,0X00,0X07,0XFF,0XF1,0XFE,
0XFF,0XFF,0XFF,0XFF,0XC0,0X0E,0XFF,0XFF,0XE3,0XC7,0X1F,0XFF,0XE0,0X3F,0XFF,0X8F,
0XFF,0XE7,0X39,0XE0,0X00,0X0F,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XC0,0X0E,0XFF,
0XFF,0XE7,0XE7,0X8F,0XFF,0XF0,0X07,0XFF,0X8F,0XFF,0XE7,0X38,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0X00,0X1E,0XFF,0XFF,0XE7,0XE7,0X8F,0XFF,0XFE,0X01,
0XFF,0X8F,0XFF,0XE3,0X10,0XFF,0XFF,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFC,0X00,
0X3E,0XFF,0XFF,0XE3,0XC7,0X8F,0XFF,0XFF,0XC0,0X7F,0X8F,0XFF,0XE3,0X01,0XFF,0X1F,
0XC7,0XFF,0XF1,0XFE,0XFF,0X83,0XFF,0XF0,0X00,0X7E,0XFF,0XFF,0XE0,0X07,0X1F,0XFF,
0XFF,0XF8,0X3F,0X8F,0XFF,0XF3,0X81,0XFF,0X1F,0XC7,0XFF,0XF1,0XFE,0XFC,0X01,0XFF,
0XE0,0X00,0XFE,0XFF,0XFF,0XF0,0X0F,0X1F,0XFF,0XFF,0XC0,0X1F,0X8F,0XFF,0XFF,0XC7,
0XFF,0X1F,0XC7,0XFF,0XF1,0XFE,0XF0,0X07,0XFF,0X80,0X01,0XFE,0XFF,0XFF,0XF8,0X1F,
0XBF,0XFF,0XFE,0X00,0X0F,0X8F,0XFF,0XFF,0XFF,0XF8,0X00,0X07,0XFF,0XF1,0XFE,0XC0,
0X18,0XFE,0X00,0X03,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0X87,0X8F,0XFF,
0XFF,0XFF,0XF8,0X00,0X0F,0XFF,0XF1,0XFE,0XC0,0XE0,0XF8,0X00,0X0F,0XFE,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X1F,0XC7,0X8F,0XFF,0XFF,0XFF,0XF8,0X00,0X0F,0XFF,0XF1,
0XFE,0XC7,0X00,0XE0,0X00,0X1F,0XFE,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XE0,0XFF,0XC7,
0X8F,0XFE,0X00,0X01,0XFF,0X1E,0XFF,0XFF,0XF1,0XFE,0XDC,0X00,0XC0,0X00,0X3F,0XFE,
0XFF,0XFF,0XF8,0X3F,0X1F,0XFF,0XE3,0XFF,0XC7,0X8F,0XFE,0X00,0X01,0XFF,0X1F,0XFF,
0XFF,0XF1,0XFE,0XE0,0X00,0X00,0X00,0XFF,0XFE,0XFF,0XFF,0XF0,0X0F,0X1F,0XFF,0XFF,
0XFF,0XC7,0X8F,0XFE,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF1,0XFE,0XC0,0X00,0X00,0X03,
0XFF,0XFE,0XFF,0XFF,0XE0,0X03,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFE,0X03,0XFF,0XF8,
0X7F,0XFF,0XFF,0XF1,0XFE,0XE0,0X00,0X00,0X07,0XFF,0XFE,0XFF,0XFF,0XE3,0XC1,0X9F,
0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XC0,0X7F,0XF8,0X1F,0XFF,0XFF,0XF1,0XFE,0XE0,0X00,
0X00,0X1F,0XFF,0XFE,0XFF,0XFF,0XE7,0XE0,0X9F,0XFF,0XF8,0X00,0XFF,0X8F,0XFF,0XF8,
0X1F,0XF8,0X07,0XFF,0XFF,0XF1,0XFE,0XF0,0X00,0X00,0XFF,0XFF,0XFE,0XFF,0XFF,0XE7,
0XF8,0X1F,0XFF,0XF0,0X00,0XFF,0X8F,0XFF,0XFE,0X03,0XF8,0X01,0XFF,0XFF,0XF1,0XFE,
0XF8,0X00,0X03,0XFF,0XFF,0XFE,0XFF,0XFF,0XE7,0XFC,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,
0XFF,0XFF,0X83,0XF8,0XC0,0X7F,0XFF,0XF1,0XFE,0XFC,0X00,0X3F,0XFF,0XFF,0XFE,0XFF,
0XFF,0XE3,0XFE,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFC,0X07,0XF8,0XF0,0X1F,0XFF,
0XF1,0XFE,0XFF,0XB7,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XF1,0XFF,0X1F,0XFF,0XE3,0X31,
0XFF,0X8F,0XFF,0XE0,0X3F,0XF8,0XFC,0X07,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0XFF,0XFF,0XF3,0XFF,0X9F,0XFF,0XE3,0X38,0XFF,0X8F,0XFF,0X00,0XFF,0XF8,0XFF,
0X03,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE3,0X38,0XFF,0X8F,0XFE,0X07,0XFF,0XF8,0XFF,0XC3,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X18,0XFF,0X8F,0XFE,0X00,0X01,
0XF8,0XFF,0XF3,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XDF,
0XFF,0XFF,0XE3,0X00,0XFF,0X8F,0XFE,0X00,0X01,0XF8,0XFF,0XFF,0XFF,0XF1,0XFE,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XE3,0X80,0XFF,0X8F,0XFE,
0X00,0X01,0XF8,0XFF,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,
0XFF,0X87,0XFF,0XFF,0XF1,0X81,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,
0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XC3,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF1,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XE3,0XFF,0XFC,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,
0XFC,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFC,0X00,0X00,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X87,0XFF,0XFC,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XE3,0XF1,0XFF,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X1F,0XFF,0XFF,0XE3,0XF9,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XE3,0XF8,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XE3,0XF8,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,
0XE1,0XF0,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XF0,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,
0XFF,0XFF,0XF0,0X01,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XF8,0X01,0XFF,0X8F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X87,0XFF,0XFF,0XFE,0X07,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XF0,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X70,0X3F,
0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,
0XFF,0XFA,0XFF,0XFF,0XFF,0XFF,0XF0,0X20,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XE0,
0X02,0X1F,0XFF,0XE3,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XF1,0XFF,
0XFF,0XFF,0XFF,0X00,0X0F,0XFF,0XFF,0XFF,0XE3,0X87,0X1F,0XFF,0XE3,0XFF,0XFF,0X8F,
0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFE,0X00,0X07,0XFF,0XFF,
0XFF,0XE7,0X8F,0X8F,0XFF,0XE3,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,
0XF1,0XFF,0XFF,0XFF,0XFE,0X00,0X02,0X7F,0XFF,0XFF,0XE7,0XCF,0X8F,0XFF,0XF0,0XFF,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
0X7F,0XFF,0XFF,0XE7,0XCF,0X9F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,
0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0XFF,0XE3,0XFF,0X1F,0XFF,
0XE0,0X00,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XF8,
0X30,0X00,0XFF,0XFF,0XFF,0XF3,0XFE,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFE,0X00,
0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XF8,0X30,0X00,0XFF,0XFF,0XFF,0XF7,0XFF,
0X3F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0X01,0XFF,0X0F,0XFF,0XFF,0XF1,
0XFF,0XFF,0XFF,0X90,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XC0,0X7F,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0X10,0X00,0X00,0XFF,
0XFF,0XFF,0XF8,0X1F,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,0XE0,0X3F,0X0F,0XFF,
0XFF,0XF1,0XFF,0XFF,0XFC,0X10,0X00,0X00,0XFF,0XFF,0XFF,0XF0,0X0F,0X1F,0XFF,0XE0,
0X00,0XFF,0X8F,0XFF,0XFF,0XF8,0X1F,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XF8,0X18,0X30,
0X00,0XFF,0XFF,0XFF,0XE0,0X03,0X1F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,0XFC,0X07,
0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XF8,0X08,0X38,0X00,0XFF,0XFF,0XFF,0XE3,0XC1,0X9F,
0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0X03,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XF0,
0X08,0X30,0X01,0XFF,0XFF,0XFF,0XE7,0XF0,0X9F,0XFF,0XFF,0XE1,0XFF,0X8F,0XFF,0XFF,
0XFF,0X81,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XE0,0X08,0X00,0X01,0XFF,0XFF,0XFF,0XE7,
0XF8,0X1F,0XFF,0XFF,0XF9,0XFF,0X8F,0XFF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XF1,0XFF,
0XFF,0XE0,0XE4,0X00,0X01,0XFF,0XFF,0XFF,0XE7,0XFC,0X1F,0XFF,0XFF,0XF8,0XFF,0X8F,
0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XE0,0XE2,0X00,0X03,0XFF,0XFF,
0XFF,0XE3,0XFE,0X1F,0XFF,0XFF,0XF8,0XFF,0X8F,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,
0XF1,0XFF,0XFF,0XC0,0XE2,0X00,0X07,0XFF,0XFF,0XFF,0XF1,0XFF,0X1F,0XFF,0XE0,0X00,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0X41,0X00,0X0F,
0XFF,0XFF,0XFF,0XF3,0XFF,0X9F,0XFF,0XE0,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFE,0X0F,
0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0X00,0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X01,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0X00,
0X30,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X03,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0X00,0X07,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,
0XC0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0XFF,0XFF,0X07,0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XE0,0XFC,0X01,0XFF,0XFF,0XF1,
0XFF,0XFF,0XC0,0X40,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XC0,0X78,0X00,0XFF,0XFF,0XF1,0XFF,0XFF,0XC0,0XE0,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0X87,0XFF,0X8F,0XFF,0XFF,0X80,0X38,0X00,0XFF,
0XFF,0XF1,0XFF,0XFF,0XE0,0XE0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0X1E,
0X03,0XFF,0X8F,0XFF,0XFF,0X00,0X10,0X00,0X7F,0XFF,0XF1,0XFF,0XFF,0XE0,0XE0,0X00,
0X7F,0XFF,0XFF,0XFE,0XFF,0XBF,0XCF,0XFE,0X3E,0X01,0XFF,0X8F,0XFF,0XFF,0X00,0X10,
0X00,0X7F,0XFF,0XF1,0XFF,0XFF,0XE0,0X00,0X00,0X3F,0XFF,0XFF,0XFE,0X3F,0XFF,0X8F,
0XFE,0X3C,0X01,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0XF0,0X7F,0XFF,0XF1,0XFF,0XFF,0XF0,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X3C,0X0F,0X9F,0XFE,0X3C,0X30,0XFF,0X8F,0XFF,0XFE,
0X0F,0X01,0XF8,0X3F,0XFF,0XF1,0XFF,0XFF,0XF8,0X00,0X01,0X1F,0XFF,0XFF,0XFF,0XF0,
0X03,0XFF,0XFE,0X3C,0X78,0XFF,0X8F,0XFF,0XFE,0X0F,0X81,0XFC,0X3F,0XFF,0XF1,0XFF,
0XFF,0XF8,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0XFF,0XFE,0X38,0X78,0XFF,0X8F,
0XFF,0XFE,0X1F,0XC3,0XFC,0X3F,0XFF,0XF1,0XFF,0XFF,0XFC,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0XFF,0XFE,0X18,0X78,0XFF,0X8F,0XFF,0XFE,0X1F,0XC3,0XFC,0X3F,0XFF,
0XF1,0XFF,0XFF,0XFF,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X7F,0XFE,0X00,0XF8,
0XFF,0X8F,0XFF,0XFE,0X1F,0XC3,0XFC,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0X80,0X3F,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0X00,0XF8,0XFF,0X8F,0XFF,0XFE,0X1F,0XC3,0XFC,
0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,
0X01,0XF0,0XFF,0X8F,0XFF,0XFE,0X1F,0XC3,0XFC,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XC3,0XF1,0XFF,0X8F,0XFF,0XFF,0X0F,
0XC3,0XFC,0X3F,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0X00,0X00,
0X31,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0X0F,0XFF,0XF8,0X3F,0XFF,0XF1,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0X00,0X00,0X31,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0X07,0XFF,0XF8,0X7F,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XF1,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XFF,
0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X78,0X03,0XDF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,
0X1F,0X8F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0X00,0X00,
0X00,0X01,0X7F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFD,0X80,0X00,0X00,0X03,0X1F,0XFF,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0X0F,0XF8,0X7F,0XFF,0XF1,0XFF,0XF8,
0X80,0X00,0X00,0X02,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0XFE,0X07,0XF8,0X3F,0XFF,0XF1,0XFF,0XF0,0X40,0X00,0X00,0X04,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFE,0X07,0XF0,0X3F,0XFF,0XF1,
0XFF,0XF0,0X60,0X00,0X00,0X0C,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X8F,0XFF,0XFF,0XFE,0X07,0XF0,0X3F,0XFF,0XF1,0XFF,0XF0,0X20,0X00,0X00,0X08,0X07,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFE,0X07,0XF0,0X3F,
0XFF,0XF1,0XFF,0XF0,0X30,0X00,0X00,0X10,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0X07,0XF8,0X7F,0XFF,0XF1,0XFF,0XF0,0X10,0X00,0X00,
0X30,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0X0F,
0XF8,0X7F,0XFF,0XF1,0XFF,0XF0,0X18,0X00,0X00,0X20,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X08,
0X00,0X00,0X60,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X04,0X00,0X00,0X40,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XF0,0X06,0X00,0X00,0X80,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X02,0X00,0X01,0X80,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XF0,0X03,0X00,0X01,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X01,0X00,0X02,0X00,
0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XF0,0X01,0X80,0X06,0X00,0X07,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X80,
0X04,0X00,0X07,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X40,0X08,0X00,0X07,0XFF,0XFF,0XFF,0XE0,
0X00,0XFE,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,
0X00,0X40,0X08,0X00,0X07,0XFF,0XFF,0XFF,0XC0,0X03,0XFF,0X80,0X00,0XFF,0X8F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X20,0X10,0X00,0X07,0XFF,0XFF,
0XFF,0X80,0X0F,0XFF,0XF8,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,
0XFF,0XF0,0X00,0X30,0X30,0X00,0X07,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XFC,0X00,0XFF,
0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X10,0X20,0X00,0X07,
0XFF,0XFF,0XFE,0X00,0XFF,0XE7,0XFE,0X00,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF1,0XFF,0XF0,0X00,0X18,0X40,0X00,0X07,0XFF,0XFF,0XFC,0X01,0XFF,0X81,0XFF,
0X00,0XFF,0X8F,0XFF,0XFF,0XF0,0X3F,0XFC,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X08,0XC0,
0X00,0X07,0XFF,0XFF,0XFC,0X01,0XFF,0X00,0X7F,0X00,0XFF,0X8F,0XFF,0XFF,0XC0,0X0F,
0XFC,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X04,0X80,0X00,0X07,0XFF,0XFF,0XF8,0X01,0XFF,
0XC0,0X7F,0X80,0XFF,0X8F,0XFF,0XFF,0X80,0X07,0XFC,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,
0X05,0X00,0X00,0X07,0XFF,0XFF,0XF8,0X00,0XFF,0XF8,0X00,0X00,0XFF,0X8F,0XFF,0XFF,
0X00,0X03,0XFC,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X03,0X00,0X00,0X07,0XFF,0XFF,0XF0,
0X00,0X1F,0XFE,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0X00,0X01,0XFC,0X3F,0XFF,0XF1,0XFF,
0XF0,0X00,0X03,0X00,0X00,0X07,0XFF,0XFF,0XF0,0X00,0X07,0XFF,0X80,0X00,0XFF,0X8F,
0XFF,0XFE,0X00,0X00,0XFC,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X01,0X00,0X00,0X07,0XFF,
0XFF,0XF1,0XFF,0X81,0XFF,0X80,0X00,0XFF,0X8F,0XFF,0XFE,0X07,0X80,0XFC,0X3F,0XFF,
0XF1,0XFF,0XF0,0X00,0X01,0X80,0X00,0X07,0XFF,0XFF,0XE0,0XFF,0X00,0X7F,0X80,0X00,
0XFF,0X8F,0XFF,0XFE,0X0F,0XE0,0X7C,0X3F,0XFF,0XF1,0XFF,0XF0,0X47,0X80,0X80,0X00,
0X07,0XFF,0XFF,0XE0,0X7F,0XC1,0X3F,0X80,0X00,0XFF,0X8F,0XFF,0XFE,0X1F,0XF0,0X3C,
0X3F,0XFF,0XF1,0XFF,0XF0,0X4F,0XC0,0X40,0X00,0X07,0XFF,0XFF,0XE0,0X3F,0XF9,0X4F,
0X00,0X00,0XFF,0X8F,0XFF,0XFE,0X1F,0XF8,0X1C,0X3F,0XFF,0XF1,0XFF,0XF0,0X4C,0X40,
0X40,0X00,0X07,0XFF,0XFF,0XE0,0X1F,0XFE,0X78,0X00,0X00,0XFF,0X8F,0XFF,0XFE,0X1F,
0XF8,0X0C,0X3F,0XFF,0XF1,0XFF,0XF0,0X64,0XC0,0X40,0X00,0X07,0XFF,0XFF,0XE0,0X0F,
0XFF,0X80,0X00,0X00,0XFF,0X8F,0XFF,0XFE,0X1F,0XFC,0X04,0X3F,0XFF,0XF1,0XFF,0XF0,
0X7F,0XC0,0X40,0X00,0X07,0XFF,0XFF,0XE0,0X05,0XFF,0XF0,0X00,0X00,0XFF,0X8F,0XFF,
0XFE,0X1F,0XFE,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,0X1F,0X00,0XC0,0X00,0X07,0XFF,0XFF,
0XE0,0X00,0X3F,0XFC,0X00,0X00,0XFF,0X8F,0XFF,0XFF,0X0F,0XFF,0X00,0X3F,0XFF,0XF1,
0XFF,0XF0,0X00,0X00,0X80,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X0F,0XFF,0X00,0X00,0XFF,
0X8F,0XFF,0XFF,0X0F,0XFF,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X01,0X00,0X00,0X07,
0XFF,0XFF,0XE0,0X00,0X03,0XFF,0X80,0X00,0XFF,0X8F,0XFF,0XFF,0X07,0XFF,0XC0,0X3F,
0XFF,0XF1,0XFF,0XF0,0X00,0X01,0X00,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0X80,
0X01,0XFF,0X8F,0XFF,0XFF,0X87,0XFF,0XE0,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X02,0X00,
0X00,0X07,0XFF,0XFF,0XE0,0X00,0X3F,0XFF,0X00,0X01,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,
0XF8,0X3F,0XFF,0XF1,0XFF,0XF0,0X00,0X06,0X00,0X00,0X07,0XFF,0XFF,0XE0,0X00,0XFF,
0XFC,0X00,0X01,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,
0X05,0X00,0X00,0X07,0XFF,0XFF,0XE0,0X01,0XFF,0XE0,0X00,0X01,0XFF,0X8F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X0D,0X80,0X00,0X07,0XFF,0XFF,0XE0,
0X01,0XFF,0X00,0X00,0X03,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XF0,0X00,0X08,0X80,0X00,0X07,0XFF,0XFF,0XE0,0X01,0XFF,0X80,0X00,0X03,0XFF,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X10,0X40,0X00,0X07,0XFF,
0XFF,0XE0,0X00,0XFF,0XF0,0X00,0X03,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XF0,0X00,0X10,0X40,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X1F,0XFE,0X00,0X07,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X20,0X20,0X00,
0X07,0XFF,0XFF,0XE0,0X00,0X03,0XFF,0X80,0X07,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X60,0X30,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X07,0XFF,
0X80,0X0F,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0X40,
0X10,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X3F,0XFF,0X80,0X1F,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X00,0XC0,0X08,0X00,0X07,0XFF,0XFF,0XE0,0X01,
0XFF,0XFF,0X00,0X1F,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,
0X00,0X80,0X0C,0X00,0X07,0XFF,0XFF,0XE0,0X01,0XFF,0XF8,0X00,0X3F,0XFF,0X8F,0XFF,
0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,0X01,0X80,0X04,0X00,0X07,0XFF,0XFF,
0XE0,0X01,0XFF,0XE0,0X00,0X7F,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,
0XFF,0XF0,0X01,0X00,0X02,0X00,0X07,0XFF,0XFF,0XE0,0X01,0XFE,0X00,0X00,0XFF,0XFF,
0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,0X02,0X00,0X03,0X00,0X07,
0XFF,0XFF,0XE0,0X01,0XF0,0X00,0X03,0XFF,0XFF,0X8F,0XFF,0XFE,0X00,0X00,0X00,0X3F,
0XFF,0XF1,0XFF,0XF0,0X06,0X00,0X01,0X00,0X07,0XFF,0XFF,0XE0,0X01,0X80,0X00,0X07,
0XFF,0XFF,0X8F,0XFF,0XFF,0X00,0X00,0X00,0X3F,0XFF,0XF1,0XFF,0XF0,0X04,0X00,0X01,
0X80,0X07,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X1F,0XFF,0XFF,0X8F,0XFF,0XFF,0X83,0XFF,
0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X0C,0X00,0X00,0X80,0X07,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0X81,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X08,
0X00,0X00,0X40,0X07,0XFF,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,
0XC1,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X18,0X00,0X00,0X60,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XC1,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XF0,0X10,0X00,0X00,0X20,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,
0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X20,0X00,0X00,0X10,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,
0XF1,0XFF,0XF0,0X60,0X00,0X00,0X18,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0X40,0X00,0X00,0X08,
0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XF8,0XC0,0X00,0X00,0X04,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF8,0X80,0X00,
0X00,0X04,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0X00,0X00,0X00,0X02,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};


const unsigned char gImage_cry[800] = { /* 0X00,0X01,0X50,0X00,0X50,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,
0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X1C,0XF0,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF3,0XCB,0X67,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0XF3,0X9F,0X9F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0X79,0X3F,0XDF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,
0XEF,0X3C,0X7D,0XDF,0XFC,0X07,0XFF,0XFF,0XFF,0XFF,0X0F,0X9C,0X79,0XCF,0XFC,0X00,
0X7F,0XFF,0XFF,0XFE,0XCF,0X9C,0XF9,0XCF,0XFC,0X00,0X3F,0XFF,0XFF,0XFF,0XCF,0XDC,
0XFB,0XC0,0X7C,0X00,0X1F,0XFF,0XFF,0XFE,0X0F,0XC8,0X03,0XC0,0XDD,0X00,0X0F,0XFF,
0XFF,0XC0,0X03,0XC0,0X01,0X8F,0XED,0X00,0X07,0XFF,0XFF,0X1F,0XF1,0X03,0XF8,0X0D,
0XF6,0X00,0X07,0XFF,0XFE,0X57,0XF9,0X1F,0XFE,0X50,0X3A,0X80,0X03,0XFF,0XFE,0XE0,
0XFC,0X38,0XFE,0X03,0X8C,0X00,0X03,0XFF,0XFE,0XFE,0X3C,0XF3,0XBC,0X1F,0XE5,0X00,
0X03,0XFF,0XFE,0X7F,0X91,0XF6,0X98,0X8B,0XF7,0X80,0X03,0XFF,0XFF,0X7F,0XC3,0XC6,
0X90,0X43,0XF2,0XC0,0X03,0XFF,0XFF,0X7F,0XC7,0XC7,0XB9,0XC0,0X12,0XE0,0X03,0XFF,
0XFF,0X3F,0XCF,0XD0,0X38,0XE0,0XF6,0XFC,0X03,0XFF,0XFE,0X18,0X8F,0X98,0X7C,0X67,
0XF7,0XFC,0X07,0XFF,0XFD,0XC0,0X1F,0XBF,0XF8,0X63,0XE6,0X00,0X07,0XFF,0XFE,0XC3,
0X1F,0XFF,0XF8,0X73,0XC0,0X70,0X03,0XFF,0XFF,0X1F,0X3F,0XFF,0XFC,0X73,0X80,0X00,
0X01,0XFF,0XFF,0X3F,0X3F,0XFF,0XF8,0X70,0X10,0X00,0X01,0XFF,0XFE,0X7F,0X3F,0XFF,
0XF8,0X30,0X18,0X00,0X00,0XFF,0XFC,0XFC,0X3F,0XFF,0XFC,0X33,0X80,0X00,0X00,0XFF,
0XFD,0XE1,0X3F,0XFF,0XFC,0X33,0XE7,0X78,0X00,0XFF,0XF9,0X8F,0X3F,0XFE,0X31,0XE3,
0XF3,0X70,0X00,0XFF,0XFB,0X7F,0X3F,0XFC,0X50,0XE1,0XFB,0X60,0X00,0XFF,0XFB,0XFF,
0X3F,0XF9,0XE0,0X60,0XF9,0X60,0X00,0XFF,0XF9,0XFF,0X9F,0XCB,0X68,0X64,0X3D,0X40,
0X00,0XFF,0XFC,0XEE,0X1F,0XE1,0XD8,0X67,0X3C,0XD0,0X00,0XFF,0XFE,0X04,0X4F,0XF5,
0XDE,0X47,0XFC,0XC0,0X00,0XFF,0XFF,0XC1,0XCF,0XF6,0X3F,0X03,0XFC,0XC0,0X00,0XFF,
0XFF,0XF3,0XE7,0XFF,0XFE,0X00,0X01,0XC0,0X01,0XFF,0XFF,0X97,0XE3,0XFF,0XFF,0X10,
0X01,0XC0,0X01,0XFF,0XFF,0XE7,0X81,0XFF,0XFE,0X01,0XDB,0XC0,0X03,0XFF,0XFF,0XEF,
0X3C,0XFF,0XF8,0X21,0XC7,0XC0,0X07,0XFF,0XFF,0XDE,0X5E,0X1F,0XE0,0XF8,0X1F,0XC0,
0X0F,0XFF,0XFF,0XDC,0XFE,0X00,0X00,0X7C,0X1F,0X80,0X1F,0XFF,0XFF,0XD9,0XFE,0X40,
0X06,0X7D,0XFF,0X80,0XFF,0XFF,0XFF,0X9B,0XFC,0XF8,0X87,0X3D,0XFF,0XFF,0XFF,0XFF,
0XFF,0XBF,0XF8,0XF7,0XE3,0X8D,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XF0,0XE7,0XC3,0XFD,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XC0,0XEF,0XE1,0XF9,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X0C,0XCF,0XEC,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF4,0XCD,0XC6,0X13,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFC,0XCF,0X9B,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,
0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X78,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};

const unsigned char gImage_smile[800] = { /* 0X00,0X01,0X50,0X00,0X50,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE2,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XED,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0X1F,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XDF,
0X9C,0XF3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X03,0XDD,0X89,0XFB,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X50,0XDF,0X8A,0X99,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XF8,0XFF,0X05,0X51,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XDE,0X3F,0X47,0X41,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X60,0XBF,0X8A,0X8B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XE4,0X1F,0X4D,0X4B,0X07,0XFF,
0XFF,0XFF,0XFF,0XFE,0X08,0X1B,0X5B,0X10,0X7B,0XFF,0XFF,0XFF,0XFF,0X80,0X01,0X1F,
0X1E,0XA1,0XFD,0XFF,0XFF,0XFF,0XFF,0X7F,0X00,0X1B,0X9B,0X07,0X0D,0XFD,0XFF,0XFF,
0XFE,0XFE,0XC4,0X18,0X02,0X4A,0XD9,0XFC,0X7F,0XEF,0XFE,0XFF,0X20,0X00,0X00,0X1F,
0X19,0XFD,0XBF,0XEF,0XFE,0XFF,0XF0,0X0F,0XFE,0X2D,0XB1,0XFD,0XD7,0XFF,0XFE,0XFF,
0XD8,0X3F,0XDF,0X83,0X43,0XFD,0XC3,0XDF,0XFE,0XFF,0XFC,0XFF,0X8F,0XC1,0X87,0XFB,
0XE3,0XF7,0XFF,0X7F,0XF5,0XA1,0X01,0XF0,0X01,0XFB,0X40,0X57,0XFF,0X7F,0XFB,0XFE,
0X40,0X78,0X00,0X3D,0XE0,0X2F,0XFF,0XBF,0XF7,0XFF,0X60,0X38,0X00,0X1D,0X40,0X07,
0XFF,0XDB,0XE7,0XF9,0XB0,0X1C,0X00,0X0C,0XC0,0X07,0XFF,0XEE,0XEF,0XC0,0X50,0X0C,
0X00,0X0C,0X80,0X07,0XFF,0XF3,0X4F,0XC0,0X58,0X06,0X00,0X4E,0X00,0X07,0XFF,0X80,
0XDF,0XD0,0X58,0X06,0X00,0X1F,0X00,0X07,0XFE,0XFC,0X1B,0XF9,0XDC,0X02,0X00,0X3F,
0XC0,0X07,0XFB,0XD6,0X1B,0XFF,0X9D,0X83,0X00,0XFF,0XE0,0X07,0XF7,0XBA,0X9F,0XFF,
0XBD,0X81,0X00,0X00,0X00,0X03,0XFF,0X6E,0X9C,0XFE,0X7D,0XC1,0X20,0X00,0X00,0X07,
0XFF,0XB5,0X1F,0X10,0XFD,0XC1,0X10,0X1F,0XF0,0X03,0XF7,0X6E,0X9F,0X3E,0XFD,0X81,
0X34,0X1F,0XE0,0X07,0XF7,0X21,0X1E,0XFF,0XBC,0XC0,0X2C,0X0F,0XC0,0X03,0XFB,0XD6,
0X1D,0XF9,0XBD,0X81,0X18,0X8F,0X80,0X07,0XFC,0X00,0X1F,0XE0,0X5D,0X02,0X3A,0XE7,
0X60,0X07,0XFF,0XF8,0XDB,0XC0,0X7C,0X02,0X3F,0XEE,0XC8,0X07,0XFF,0XF7,0XCF,0XD8,
0X78,0X04,0X1F,0XCE,0X30,0X07,0XFF,0XEF,0X4F,0XF9,0XD8,0X08,0X00,0X1E,0XF0,0X07,
0XFF,0X9D,0XA7,0XFF,0XD8,0X08,0X07,0XFE,0XD0,0X07,0XFF,0X7B,0X53,0XFF,0XB0,0X30,
0X03,0XFF,0XE0,0X07,0XFF,0X76,0XE3,0XFF,0X60,0X60,0X01,0XFE,0XA0,0X0F,0XFE,0XED,
0X50,0XBE,0XC0,0XC0,0X01,0XFC,0X40,0X37,0XFE,0XFB,0XA8,0X7B,0X87,0X00,0X10,0XFC,
0X00,0X7F,0XFF,0XED,0X53,0X1F,0XFC,0X00,0X48,0XFC,0X00,0X6F,0XFE,0XF8,0X67,0X00,
0XE0,0X11,0XA8,0XFE,0X00,0XFF,0XFE,0XFB,0X8F,0X40,0X01,0XE8,0XFC,0XFE,0X02,0XFF,
0XFF,0X3C,0X3F,0X80,0X04,0XE4,0X38,0XFF,0X07,0XEF,0XFF,0XC3,0X5F,0X24,0X05,0XB8,
0X81,0XFE,0X1F,0XFF,0XFF,0XFF,0X7F,0XC4,0X07,0XEE,0XFF,0XFF,0X3F,0XEF,0XFF,0XFE,
0XFE,0X4A,0X83,0XBC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0X8D,0X03,0XEE,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFE,0XDA,0X8A,0X85,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XEF,0X1E,
0X86,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFC,0X55,0X06,0X7E,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X78,0XDA,0X87,0X99,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XDA,0X0F,0XC3,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE9,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE6,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF4,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};

