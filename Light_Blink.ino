// LED pin
const int ledPin = 13; // pin 13 বিল্ট-ইন LED এর জন্য ব্যবহৃত

void setup() {
  // LED পিনকে output হিসেবে set
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // LED on
  delay(1000);                // 1 sec waiting..
  digitalWrite(ledPin, LOW); // LED of
  delay(1000);              // 1 sec waiting...
}
