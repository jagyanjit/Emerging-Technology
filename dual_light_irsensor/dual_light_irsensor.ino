int sensorPin = 2;     // IR sensor output pin
int ledPin = 13;       // LED pin
int sensorValue = 0;   // Variable to store sensor value

void setup() {
  pinMode(sensorPin, INPUT);   // IR sensor as input
  pinMode(ledPin, OUTPUT);     // LED as output
  Serial.begin(9600);          // For debugging
}

void loop() {
  sensorValue = digitalRead(sensorPin);  // Read sensor state

  if (sensorValue == LOW) {  
    // Most IR sensors give LOW when obstacle detected
    digitalWrite(ledPin, HIGH);   // Turn LED ON
    Serial.println("Obstacle Detected!");
  } else {
    digitalWrite(ledPin, LOW);    // Turn LED OFF
    Serial.println("No Obstacle");
  }

  delay(100);  // Small delay to stabilize readings
}