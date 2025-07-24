char data = 0; // variable to store received data

void setup() {
  Serial.begin(9600);         // Start serial communication
  pinMode(13, OUTPUT);        // Set pin 13 as output (LED)
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();     // Read the received data

    if (data == '1') {
      digitalWrite(13, HIGH); // Turn LED ON
    } 
    else if (data == '0') {
      digitalWrite(13, LOW);  // Turn LED OFF
    }
  }
}
