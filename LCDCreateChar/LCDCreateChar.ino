/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */
 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte L[8] = {
  B01100,
  B11110,
  B11101,
  B11000,
  B01000,
  B00110,
  B00011,
  B00001,
};

byte R[8] = {
  B00110,
  B01111,
  B10111,
  B00011,
  B00010,
  B01100,
  B11000,
  B10000,
};

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("HBD My Darling.");
  lcd.createChar(0, L);
  lcd.createChar(1, R);
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print("--->");
  lcd.setCursor(5, 1);
  lcd.print("Helene");
  lcd.setCursor(12, 1);
  lcd.write(byte(0));
  lcd.setCursor(13, 1);
  lcd.write(byte(1));
  lcd.setCursor(14, 1);
  lcd.write(byte(0));
  lcd.setCursor(15, 1);
  lcd.write(byte(1));
}

