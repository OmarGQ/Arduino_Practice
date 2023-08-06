#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
const int pinSensor = A0; 
const int pinLed = 13; 
int valorSensor = 0;  
float temperatura = 0; 

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600); 
  lcd.begin(16, 2);
}

void loop() { // leemos el valor del sensor 
  valorSensor = analogRead(pinSensor);
  float milivolts = (valorSensor / 1023.0) * 5000;
  temperatura = milivolts/10;
  Serial.print("La temperatura es de: "); 
  Serial.print(temperatura); 
  Serial.println(" grados centigrados"); 
  lcd.print(temperatura); 
  lcd.print(" oC"); 
  if(temperatura > 30){ 
    digitalWrite(pinLed, HIGH); 
  } else { 
    digitalWrite(pinLed, LOW); 
  } 
  delay(500); 
  lcd.clear(); 
}
