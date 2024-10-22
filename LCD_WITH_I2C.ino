#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd;

void setup() {
  lcd.begin(16, 2); // Inisialisasi LCD dengan 16 kolom dan 2 baris
  lcd.print(F("Subscribe my YT"));
  lcd.setCursor(0, 1);
  lcd.print(F("Mr Controllers Noobs"));
}

void loop() {
  // Kode loop utama (jika diperlukan)
}
