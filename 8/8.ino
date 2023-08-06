int valor = 0;
int motor = 10;

void setup() {
}

void loop() {
  for(valor = 0 ; valor <= 255; valor +=5) { // se genera una rampa de subida de tensión de 0 a 255 es decir de 0 a 5v 
    analogWrite(motor, valor); 
    delay(30); // espera 30 ms para que el efecto sea visible 
    } 
    for(valor = 255; valor >=0; valor -=5) { // se genera una rampa de bajada de tensión de 255 a 0 es decir de 5 a 0v 
      analogWrite(motor, valor); 
    delay(30);
   }
}
