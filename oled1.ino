#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define HEIGHT 64
#define WIDTH 128
#define OLED_RESET 4

Adafruit_SSD1306 oled(WIDTH, HEIGHT, &Wire, OLED_RESET);

void setup() {
  Wire.begin();
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() {
  oled.clearDisplay();
  oled.setTextSize(5);
 oled.setTextColor(WHITE);
  oled.setCursor(8,10);
  oled.println("ALA!");
  //oled.setCursor(0,20);
 // oled.println("Mi nombre es David");
  
  oled.display();
}
