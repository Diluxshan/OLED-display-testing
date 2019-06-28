#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Splash.h>

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup() {
  
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();  //clear the arafurit logo
  display.display();

  // display a pixel in each corner of the screen
    //  display.drawPixel(0, 0, WHITE);
    //  display.drawPixel(127, 0, WHITE);
    //  display.drawPixel(0, 63, WHITE);
    //  display.drawPixel(127, 63, WHITE);

  //fillRect(x, y, width, height, color)
  display.fillRoundRect(0, 15, 128, 5, 2, WHITE);
  
  // display a line of text
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(16,25); //X,Y
  display.print("SENZMATE");
  //display.clearDisplay();

  //fillRect(x, y, width, height, color)
  display.fillRoundRect(0, 45, 128, 5, 2, WHITE);
  
  //single line
  //display.drawLine(0, 0, 127, 20, WHITE);

  // update display with all of the above graphics
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
