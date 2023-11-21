// Visualizzo sul display la temperatura e l'umidità letti dal sensore DHT22

#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 3
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);
float es, e, dp;

void setup() {
  pinMode(9, OUTPUT);
  lcd.init();
  lcd.backlight();
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  //lcd.clear();
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  lcd.setCursor(0, 0);
  lcd.print("T: ");
  lcd.print(temperature);
  lcd.setCursor(0,1);
  lcd.print("H: ");
  lcd.print(humidity);

  //delay(1000);

  
}