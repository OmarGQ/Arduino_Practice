int brightness = 0; 
int fadeAmount = 5;
void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(9, brightness); // establece el brillo para el pin 9 
  brightness = brightness + fadeAmount; // cambia el brillo para el siguiente ciclo 
  if (brightness == 0 || brightness == 255){
    fadeAmount = -fadeAmount ; 
   } 
  delay(30);
}
