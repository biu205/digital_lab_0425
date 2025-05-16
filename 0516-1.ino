int analogPin= A0;
int sensorValue=0;
int ledPin=9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=analogRead(analogPin);
  Serial.println(sensorValue);
  analogWrite(ledPin, sensorValue/4);
  delay(1);

}
