// ---------------------------------------------------------------------------
// Tirs3bis Library - v1.0 - 22/03/2020
// This Library is for the target box with Arduino Uno.
//
// AUTHOR/LICENSE:
// Created by Mamadou BA Neige - naedioba1@gmail.com
// Copyright 2020 License: Permission is granted to use as-is for private and
// commercial use. If you wish to contribute, make changes, or enhancements,
// please feel free, but just send me a copy of the new library. 
//
// LINKS:
// Blog: http://mamadou-ba-neige.over-blog.com/
//
// BACKGROUND:
// When I first saw the program of remote targets created by Naudnaud and Krispies 
// (http://airsoft-krispies.forumactif.org/t4771-shield-cible-electronique-krispies-naudnaud-tuto-v2-mini-shield-en-cours)  
// as my contribution. 
// I would like to thank a lot Naudnaud and Krispies who made the initial program.
// The 6 sensors are connected to the analog pins.
// 
// Sensors pin connections
//				 ___________________________________
// 				|Arduino Uno & Mega	| Arduino Nano	|
//	____________|___________________|_______________|	
// |sensor 1	|		A0			|		A0		|	
// |sensor 2	|		A1			|		A1		|	
// |sensor 3	|		A2			|		A2		|	
// |sensor 4	|		A3			|		A3		|
// |sensor 5	|		A4			|		A6		|
// |sensor 6	|		A5			|		A7		|
// --------------------------------------------------
// For the Arduino Nano, pins A4 and A5 are used for the SDA and SCL of the LCD I2C.
//
// ---------------------------------------------------------------------------

#include "Tirs3bis.h"
#include "Arduino.h"


 Tirs3bis::Tirs3bis (){

}

void Tirs3bis::PinSetup() {

}


void Tirs3bis::Partie1()
{
    while(1) {    
     
      //Cibles 1
      int val0 = analogRead(A0);
      if(val0 >= Sensibilite){
        buttonStateC0=1;
      }
      else { buttonStateC0=0;}
  
      if (buttonStateC0 != lastBoutonStateC0) {
        if ( buttonStateC0 == 1){
          Serial.println('A');
        }
        lastBoutonStateC0 = buttonStateC0;
      }
         
      //Cible 2
      int val1 = analogRead(A1);
      if(val1 >= Sensibilite){
        buttonStateC1=1;
      }
      else { buttonStateC1=0;}
  
      if (buttonStateC1 != lastBoutonStateC1) {
        if ( buttonStateC1 == 1){
          Serial.println('B');
        }
        lastBoutonStateC1 = buttonStateC1;
      }
            
      //Cible 3 
      int val2 = analogRead(A2);
      if(val2 >= Sensibilite){
        buttonStateC2=1;
      }
      else { buttonStateC2=0;}
  
      if (buttonStateC2 != lastBoutonStateC2) {
        if ( buttonStateC2 == 1){
          Serial.println('C');
        }
        lastBoutonStateC2 = buttonStateC2;
      }
        
      //Cible 4 
      int val3 = analogRead(A3);
      if(val3 >= Sensibilite){
        buttonStateC3=1;
      }
      else { buttonStateC3=0;}
  
      if (buttonStateC3 != lastBoutonStateC3) {
        if ( buttonStateC3 == 1){
          Serial.println('D');
        }
        lastBoutonStateC3 = buttonStateC3;
      }
        
      //Cible 5
      int val4 = analogRead(A4);
      if(val4 >= Sensibilite){
        buttonStateC4=1;
      }
      else { buttonStateC4=0;}
  
      if (buttonStateC4 != lastBoutonStateC4) {
        if ( buttonStateC4 == 1){
          Serial.println('E');
        }
        lastBoutonStateC4 = buttonStateC4;
      }
          
      //Cible 6
      int val5 = analogRead(A5);
      if(val5 >= Sensibilite){
        buttonStateC5=1;
      }
      else { buttonStateC5=0;}
  
      if (buttonStateC5 != lastBoutonStateC5) {
        if ( buttonStateC5 == 1){
          Serial.println('F');
        }
        lastBoutonStateC5 = buttonStateC5;
      }
  } // fin while
}  