#include <MQ2.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2); // CHANGE 0X3F TO 0X27 AS LCD ADDRESS IF YOURS IS DIFFERENT
int Analog_Input = A0;              // IMPUT PIN SHOULD BE ANALOG
int lpg, co, smoke;
MQ2 mq2(Analog_Input);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  mq2.begin();
}
void loop(){
  lpg = mq2.readLPG();
  co2 = mq2.readCO();
  smoke = mq2.readSmoke();
  lcd.setCursor(0, 0);
  lcd.print("LPG:");
  lcd.print(lpg);
  lcd.print(" CO2:");
  lcd.print(co2);
  lcd.setCursor(0, 1);
  lcd.print("SMOKE:");
  lcd.print(smoke);
  lcd.print(" PPM");
  delay(1000);
}
