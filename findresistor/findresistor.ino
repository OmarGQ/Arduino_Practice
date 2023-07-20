void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float value = 5.0 / 1023 * (analogRead(A0));
  float resistor = 1000 * (value / (5 - value));
  Serial.println(resistor);
  delay(500);
}
