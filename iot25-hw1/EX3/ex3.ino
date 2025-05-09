//202034104 최경민


const int potPin = 34;

int potValue = 0;

void setup() {
  Serial.begin(115200);  
  // initialize the pushbutton pin as an input
  // pinMode(buttonPin, INPUT);

}


void loop() {
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}
