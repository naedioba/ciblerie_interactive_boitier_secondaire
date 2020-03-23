#include <Tirs3bis.h>

#include <avr/io.h>
#include <avr/wdt.h>
#include <EEPROM.h>               // Library To read and write PICC's UIDs from/to EEPROM
#include <LCD.h>
#include <LiquidCrystal_I2C.h>    // Librairie pour écran 4fils
#include <SoftwareSerial.h>
#include <SPI.h>                  // Library  RC522 Module uses SPI protocol
#include <Wire.h>


 Tirs3bis tirs;
 
 
 
 void setup() {
  Serial.begin(9600);
  
  
 }

 void loop() {
  
  tirs.Partie1();
}