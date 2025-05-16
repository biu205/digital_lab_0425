int analogPin= A0;
int val= 0 ;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  Serial.println(val);
  if(val<50) val=50;
  if(val>530) val=530;
  int ledDimming=map(val,50,530,0,255);
  analogWrite(ledPin, ledDimming);
  delay(1);

}
