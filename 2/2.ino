int ledPin = 13;
int inPin=5;
int val=0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  val=digitalRead(inPin);
  if(val==HIGH){
    digitalWrite(ledPin, LOW);
  }else{
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin, HIGH);
    delay(200);
  }
}

