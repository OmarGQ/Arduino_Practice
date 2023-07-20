//Constants
const int pResistor = A0; 
const int check = 500;
const int MResistence = A1;

//Variables
int value;
float block;
bool flag = false;

void setup(){
 Serial.begin(9600);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT); 
 pinMode(pResistor, INPUT);
 pinMode(MResistence, INPUT);
}

void loop(){
  do{
    value = 5.0/950*(analogRead(pResistor));
    block = analogRead(MResistence);
    Serial.println(value);
    Serial.println(block);
    if((value < 1) && flag == true){
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
    }
    else if ((value < 1) && flag == false){
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      if(block > 10){
        flag = true;
      }
    }
    else if(value >= 4){
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      flag = false;
    }
    else if((value >= 1) && (value < 4)){
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      flag = false;
    }
    delay(400); //Small delay
  }while(true);
}
