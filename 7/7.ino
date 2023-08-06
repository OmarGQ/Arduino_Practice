int LED = 13; 
int Boton = 7;
int valor = 0; 
int contador = 0; 
int estadoanteriorboton = 0;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(Boton, INPUT);
}

void loop() {
  valor = digitalRead(Boton); // lee el valor de la entrada digital pin 7 
  digitalWrite(LED, valor); 
  if(valor != estadoanteriorboton){ 
    if(valor == 1){ 
      contador++; 
      Serial.print(contador); 
      Serial.write(10); 
      Serial.write(13);
    }
  }
  estadoanteriorboton = valor;
}
