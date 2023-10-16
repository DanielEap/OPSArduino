#define LED_PIN 2
#define POTENTIOMETER_PIN 4
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* basic functions
    digitalWrite(pin, HIGH/LOW) {outputs discrete voltage}
    analogRead(pin){reads varaible voltage from 0 - 1023}
    delay(milliseconds){}
    Serial.print(text){prints out to serial window}
  Serial.println()
  */
  // Serial.println("hello");
  // delay(3000);
  int del = analogRead(POTENTIOMETER_PIN);
  digitalWrite(LED_PIN, HIGH);
  Serial.println(del);
  delay(del);
  digitalWrite(LED_PIN, LOW);
  delay(del);
}

