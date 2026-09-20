const int pirPin = 7;
const int ledPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== BAI 4.6: CAM BIEN DICH CHUYEN PIR ===");
}

void loop() {
  int pirVal = digitalRead(pirPin);
  digitalWrite(ledPin, pirVal);

  if (pirVal == HIGH) {
    Serial.println("Phat hien chuyen dong!");
  }
  delay(300);
}
