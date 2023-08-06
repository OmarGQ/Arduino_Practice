#include <LiquidCrystal.h> //Definir librerias
#include <Keypad.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Se define pines donde se va a conectar la pantalla
const byte ROWS = 4; //Cuantas filas
const byte COLS = 4; //Cuantas columnas
char hexaKeys[ROWS][COLS] = {
{'7','8','9','/'},
{'4','5','6','x'}, //Mapa de la matriz
{'1','2','3','-'},
{'o','0','=','+'}
};
byte rowPins[ROWS] = {A3, A2, A1, A0}; //Definicion de pines para las filas del teclado
byte colPins[COLS] = {10, 9, 8, 7}; //Definicion de pines para las columnas del teclado
//El siguiente renglón es un arreglo de valores
Keypad myKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup(){
  lcd.begin(16,2);
  lcd.print("DECODIFICACION DE TECLADO"); //Al empezar que muestre Mensaje
  delay(1000);
  lcd.clear();
}

void loop(){
  char key = myKeypad.getKey(); //Que obtenga un valor carácter de la matriz
  if
    (key=='1'||key=='2'||key=='3'||key=='4'||key=='5'||key=='6'||key=='7'||key=='8'||key=='9'||key=='0'||key=='/'||key=='x'||key=='-'||key=='+'||key=='='){
    lcd.print(key); //si cualquiera de los datos obtenidos que lo imprima en la pantalla
  }
  if (key=='o'){
    lcd.clear(); //si obtiene la tecla on/c que borre todo de la pantalla
  }
}
