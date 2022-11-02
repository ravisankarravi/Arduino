#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 4, 5, 6, 7);

void setup() {
 
  lcd.begin(16, 2);

  lcd.print("Arduino");
}

void loop() {

  lcd.setCursor(0, 1);
  
  lcd.print("workshop");
 
  delay(50);
}
