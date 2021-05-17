#define FIRST_PIN 6
#define LAST_PIN 10
#define WAIT_FOR 100

void setup() {
  for(int i = FIRST_PIN; i <= LAST_PIN; i++) {
    pinMode(i, OUTPUT); 
  }
}

void loop() {
  for(int i = FIRST_PIN; i <= LAST_PIN; i++) {
    digitalWrite(i, HIGH);
    delay(WAIT_FOR);
    digitalWrite(i, LOW);
    delay(WAIT_FOR); 
  }
  for(int i = LAST_PIN; i >= FIRST_PIN; i--) {
    digitalWrite(i, HIGH);
    delay(WAIT_FOR);
    digitalWrite(i, LOW);
    delay(WAIT_FOR); 
  }
}
