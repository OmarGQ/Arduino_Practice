int pinArray[] = {2, 3, 4, 5, 6, 7}; // PIN-es 
int count = 0; // Contador 
int timer = 30; // Temporizador
void setup() {
  for (count=0;count<6;count++) { // Configuramos todas los PIN-es de golpe 
    pinMode(pinArray[count], OUTPUT); 
    }
}

void loop() {
  for (count=0;count<5;count++) { // Enciende los LED creando una estela visual 
    digitalWrite(pinArray[count], HIGH); 
    delay(timer); 
    digitalWrite(pinArray[count + 1], HIGH); 
    delay(timer); 
    digitalWrite(pinArray[count], LOW); 
    delay(timer*2); 
    }
    for (count=5;count>0;count--) { 
      digitalWrite(pinArray[count], HIGH); 
      delay(timer); 
      digitalWrite(pinArray[count - 1], HIGH); 
      delay(timer); 
      digitalWrite(pinArray[count], LOW); 
      delay(timer*2); 
    }
    delay(timer); 
    for (count=5;count>=0;count--) { 
      digitalWrite(pinArray[count], HIGH); // Recorrido de vuelta 
      delay(timer); 
      digitalWrite(pinArray[count], LOW); 
      delay(timer); 
    }
}
