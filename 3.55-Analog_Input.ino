int inPin = A0;
int Light;
void setup() {
    pinMode(A0,INPUT);
    Serial.begin(9600);
}
void loop() {
      Light=Serial.println(analogRead(inPin),HEX);
  delay(250);
}
