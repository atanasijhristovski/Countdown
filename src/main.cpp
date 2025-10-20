/*
file main.cpp
Autor: Atanasij Hristovski
Date: 09.10.2025
Version:        1.0
Licence:         MIT
*/
#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Geben Sie eine Zahl ein: ");
  while (Serial.available() == 0) {
    //warten bis etwas eingeben wird 
}
  //Die eingelesene Zalz wird in einer Variable gespeichert
  int zahl = Serial.parseInt();
  delay(10);
  while (Serial.available())
  {
    Serial.read();
  }
  if (zahl != 0)
  {
    Serial.println(zahl);
    //Countdown von zahl bis 1
    for(int i = zahl; i > 0; i--)
    {
      Serial.println(i);
      delay(10);
    }
  }
    Serial.println("Start!");
    delay(500);
    
}