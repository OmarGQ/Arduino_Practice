int pin2 = 2; // PIN-es de los LED 
int pin3 = 3; 
int pin4 = 4; 
int pin5 = 5; 
int pin6 = 6; 
int pin7 = 7;
int timer = 100; // Temporizador
void setup() {
  pinMode(pin2, OUTPUT); // Configuración de los PIN-es como salida 
  pinMode(pin3, OUTPUT); 
  pinMode(pin4, OUTPUT); 
  pinMode(pin5, OUTPUT); 
  pinMode(pin6, OUTPUT); 
  pinMode(pin7, OUTPUT);
}

void loop() {
 digitalWrite(pin2, HIGH); // Enciende y apaga secuencialmente LED-s 
 delay(timer); 
 digitalWrite(pin2, LOW); 
 delay(timer); 
 digitalWrite(pin3, HIGH); 
 delay(timer); 
 digitalWrite(pin3, LOW); 
 delay(timer);
 digitalWrite(pin4, HIGH); 
 delay(timer); 
 digitalWrite(pin4, LOW); 
 delay(timer); 
 digitalWrite(pin5, HIGH); 
 delay(timer); 
 digitalWrite(pin5, LOW); 
 delay(timer);
 digitalWrite(pin6, HIGH); 
 delay(timer); 
 digitalWrite(pin6, LOW); 
 delay(timer); 
 digitalWrite(pin7, HIGH); 
 delay(timer);
 digitalWrite(pin7, LOW); 
 delay(timer); 
 digitalWrite(pin6, HIGH); 
 delay(timer); 
 digitalWrite(pin6, LOW); 
 delay(timer); 
 digitalWrite(pin5, HIGH); 
 delay(timer); 
 digitalWrite(pin5, LOW); 
 delay(timer); 
 digitalWrite(pin4, HIGH); 
 delay(timer); 
 digitalWrite(pin4, LOW); 
 delay(timer); 
 digitalWrite(pin3, HIGH); 
 delay(timer); 
 digitalWrite(pin3, LOW); 
 delay(timer);
}
