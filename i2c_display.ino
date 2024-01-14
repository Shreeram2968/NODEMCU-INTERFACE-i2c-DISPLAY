#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);// if it doesnt work change 0x3k into 0x27
void setup(){
  Wire.begin(2,0);
  lcd.init();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight 
  lcd.print(" Hello Makers "); // you can change the text inside the cottations .
}                              // for example (" your name ") .
void loop(){
  // Nothing Absolutely Nothing!
}
