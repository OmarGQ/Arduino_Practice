int ledPin = 13;
int inPin = 10;
int value = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  value=digitalRead(inPin);
  digitalWrite(ledPin, value);
}

