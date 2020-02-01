const int ledPin = 8;
const int analogPot = A5;

int analogRd = 0;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(analogPot, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  analogRd = analogRead(analogPot);
  Serial.println(analogRd);
  
  if (analogRd >= 600) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
}
  