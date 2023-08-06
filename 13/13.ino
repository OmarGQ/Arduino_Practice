int ledPin = 9; // Selección del PIN de salida Analógica 
int inputPin = 2; // Selección del PIN para la entrada de pulsador 
int val = 0; // variable para leer el estado del pulsador 
int fadeval = 0; 

void setup() { 
  pinMode(ledPin, OUTPUT); // designación de salida Analógica 
  pinMode(inputPin, INPUT); // designación de pulsador de entrada 
}
void loop(){
  val = digitalRead(inputPin); // leer valor de entrada 
  if (val == HIGH) { // Botón pulsado 
    digitalWrite(ledPin, LOW); // puesta a "0" de la salida 
    delay(500); 
    digitalWrite(ledPin, HIGH); // puesta a "1" de la salida 
    delay(500); 
  }
  else { // Si se presiona el boton 
    for(fadeval = 0 ; fadeval <= 255; fadeval+=5) { // valor de salida analógica //asciende de min a max) 
      analogWrite(ledPin, fadeval); // fija el valor en la salida ( desde 0-255) 
      delay(100); 
    }
    for(fadeval = 255; fadeval >=0; fadeval-=5) { // valor de salida analógica desciende //(desde max to min) 
      analogWrite(ledPin, fadeval); 
      delay(100); 
    }
  }
}

