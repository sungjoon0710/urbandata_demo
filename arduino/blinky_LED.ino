/**
Blinky LED with Pin 18
Credit: https://urbandata.me/urbansensing/hello-world-with-esp32-part-4/
**/


void setup() {
  // initialize digital pin GPIO18 as an output.
  pinMode(18, OUTPUT);
}

void loop() {
  digitalWrite(18, HIGH); // turn the LED on
  delay(1000);             // wait for 1000 milliseconds
  digitalWrite(18, LOW);  // turn the LED off
  delay(500);             // wait for 500 milliseconds
}