int ledpin2 = 12;

// the setup function runs once when you press reset or power the board
void setup() {  //只執行一次
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledpin2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {   //重複執行
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledpin2, LOW);
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledpin2, HIGH);
  delay(50);                      // wait for a second
}




