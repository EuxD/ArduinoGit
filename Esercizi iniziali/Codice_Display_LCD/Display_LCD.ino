#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  delay(1000);


}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Ciao mondo");
  //delay(1000);

}
