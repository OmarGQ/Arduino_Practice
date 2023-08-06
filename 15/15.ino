#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
const int pinSensor = A0; // pin del sensor de luz, va a la pata central del sensor const 
int pinLed = 13; // pin para el led 
const int umbral = 20; // umbral de la luz, ya en grados centigrados 
long valorSensor = 0; // variable para guardar el valor leido del sensor 
float temperatura = 0; // variable para guardar la medición de iluminosidad 

void setup() { // declaramos el pin del Led de salida 
  pinMode(pinLed, OUTPUT); //inicializamos la comunicacion serial 
  Serial.begin(9600); 
  lcd.begin(16, 2); 
}

void loop() { // leemos el valor del sensor 
  valorSensor = analogRead(pinSensor); 
  valorSensor = valorSensor * 100 / 1023; // modificar el denominador en caso de calibrar 
  if(valorSensor < 15){ // estos límites también permiten la calibración 
    valorSensor = 0; 
  } 
  Serial.print("La luminosidad es de: "); 
  Serial.print(valorSensor); 
  Serial.println(" %"); 
  if (valorSensor != 0){ 
    digitalWrite(pinLed, HIGH); 
  } else { 
    digitalWrite(pinLed, LOW); 
  } lcd.print(valorSensor); 
  lcd.print("% Luminosidad"); 
  delay(500); 
  lcd.clear();
}

