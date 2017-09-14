/* LCD 4002 Blue (ERM4002SBS-1) [D051] : http://rdiot.tistory.com/232 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,40,2);  // LCD4002

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD4002");
  
  delay(1000);

  lcd.clear();
}

void loop()
{
 
  lcd.setCursor(0,0);
  lcd.print("D051:LCD4002");

  
  String str="";
  for(char i='A'; i<='Z'; i++)
  {
    
    str += (String)i;

    lcd.setCursor(0,1);  
    lcd.print(str);

    delay(50);
  }
  
  str +=" ";

  for(int i=1; i<=10; i++)
  {
    
    str += (String)i;

    lcd.setCursor(0,1);  
    lcd.print(str);

    delay(300);
  }
}
