/*Sudharani Inti*/
#include <Wire.h>  // This library is already built in to the Arduino IDE
#include <LiquidCrystal_I2C.h> //This library you can add via Include Library > Manage Library > 
LiquidCrystal_I2C lcd(0x27, 16, 2);
/*NodeMCU:
(D4)->SDA
(D3)->SCL
(Vin)->Vcc
*/
void setup()
{
  Wire.begin(2,0);
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  lcd.setCursor(4,0);   //Set cursor to character 4 on line 0
  lcd.print("NodeMCU");
  
  lcd.setCursor(0,1);   //Move cursor to character 0 on line 1
  lcd.print("LCD Display-I2C!");
}

void loop()
{
  // Nothing Absolutely Nothing!
}
