#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Geben Sie eine Zahl ein: ");
  while (Serial.available() == 0) {
    //warten bis etwas eingeben wird 
}
  int zahl = Serial.parseInt();
  if (zahl != 0)
  {
    Serial.println(zahl);
    for(int i = zahl; i > 0; i--)
    {
      Serial.println(i);
      delay(1000);
    }
  }
    Serial.println("Start!");
    delay(500);
  
    

}