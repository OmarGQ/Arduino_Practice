int pinArray[] = {2, 3, 4, 5, 6, 7}; // Define el array de pines 
int count = 0; // Contador 
int timer = 100; // Temporizador
void setup() {
  for (count=0;count<6;count++){ // Configuramos todos los PIN-es 
    pinMode(pinArray[count], OUTPUT); 
  }
}

void loop() {
  for (count=0;count<6;count++) { // utilizando la secuencia de control for(;;)
    digitalWrite(pinArray[count], HIGH); // Recorrido de ida 
    delay(timer); 
    digitalWrite(pinArray[count], LOW); 
    delay(timer);
  }
  for (count=5;count>=0;count--) { 
    digitalWrite(pinArray[count], HIGH); // Recorrido de vuelta 
    delay(timer); 
    digitalWrite(pinArray[count], LOW); 
    delay(timer); 
  }
}

