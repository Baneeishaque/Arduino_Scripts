const int soil_pin=2;
const int led_out=3;

void setup() {
    pinMode(led_out, OUTPUT);
    pinMode(soil_pin, INPUT);
}
void loop() {
  if(digitalRead(soil_pin) == HIGH){
    digitalWrite(led_out, LOW);
  } else {
    digitalWrite(led_out, HIGH);
    delay(1000);
  }
}
