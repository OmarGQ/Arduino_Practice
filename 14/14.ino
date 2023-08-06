// Control de Motor con driver L293D 
int valor = 0; // variable que contiene el valor 
int motorAvance = 10; // Avance motor --> PIN 10 
int motorRetroceso = 11; // Retroceso motor --> PIN 11 

void setup() { } // No es necesario

void loop() { 
  analogWrite(motorRetroceso, 0); // Motor hacia delante ... sube la velocidad 
  for(valor = 0 ; valor <= 255; valor+=5) { 
    analogWrite(motorAvance, valor); 
    delay(30);  
  }
  for(valor = 255; valor >=0; valor-=5) { // Motor hacia delante ... baja la velocidad 
    analogWrite(motorAvance, valor); 
    delay(30); 
  } 
  analogWrite(motorAvance, 0); // Motor hacia detrás ... sube la velocidad 
  for(valor = 0 ; valor <= 255; valor+=5) { 
    analogWrite(motorRetroceso, valor); 
    delay(30); 
  }
  for(valor = 255; valor >=0; valor-=5) { // Motor hacia detrás ... baja la velocidad 
    analogWrite(motorRetroceso, valor); 
    delay(30);
  }
}
