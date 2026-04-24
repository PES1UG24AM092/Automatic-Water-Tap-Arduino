// Pin definitions [cite: 121]
const int trigPin = 10; [cite: 122]
const int echoPin = 11; [cite: 123]
const int relayPin = 7; [cite: 124]

// Distance threshold in cm [cite: 125, 126]
const int distanceThreshold = 10; 

void setup() {
  pinMode(trigPin, OUTPUT); [cite: 129, 130]
  pinMode(echoPin, INPUT); [cite: 131, 132]
  pinMode(relayPin, OUTPUT); [cite: 133]
  digitalWrite(relayPin, LOW); // Pump OFF initially [cite: 134]
  Serial.begin(9600); [cite: 135]
}

void loop() {
  long duration;
  int distance;

  // Trigger ultrasonic pulse [cite: 139]
  digitalWrite(trigPin, LOW); [cite: 140]
  delayMicroseconds(2); [cite: 141]
  digitalWrite(trigPin, HIGH); [cite: 142]
  delayMicroseconds(10); [cite: 143]
  digitalWrite(trigPin, LOW); [cite: 144]

  // Read echo time [cite: 145]
  duration = pulseIn(echoPin, HIGH); [cite: 146, 147]

  // Convert to distance in cm [cite: 148, 150]
  distance = (duration * 0.034) / 2; 

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm"); [cite: 151]

  // Logic: Low signal energizes the relay to turn pump ON [cite: 20]
  if (distance > distanceThreshold || distance <= 0) { [cite: 152, 155]
    Serial.println("No hand detected - Pump OFF"); [cite: 152]
    digitalWrite(relayPin, HIGH); [cite: 152]
  } else {
    Serial.println("Hand detected - Pump ON"); [cite: 153]
    digitalWrite(relayPin, LOW); [cite: 153]
  }
  delay(200); // Debounce delay [cite: 157]
}
