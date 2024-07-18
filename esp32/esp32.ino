#define D14 14
const int DIST_SENSOR = D14; 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(DIST_SENSOR, INPUT);
//  Serial.begin(9600);
}

void loop() {
  int distValue = digitalRead(DIST_SENSOR);
//  Serial.println(distValue);
  if (distValue == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
}
