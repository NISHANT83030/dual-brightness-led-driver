// Arduino Nano PWM control for LED brightness via Buck Converter
// Author: Nishant Singh
// Full brightness: 37.5% duty cycle
// Half brightness: 26.5% duty cycle

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Optional status LED
  pinMode(3, OUTPUT);            // PWM output pin connected to MOSFET gate
  digitalWrite(3, LOW);
}

void loop() {
  // Full brightness (37.5% duty cycle)
  digitalWrite(LED_BUILTIN, HIGH);
  for (long i = 0; i < 100000; i++) {
    digitalWrite(3, HIGH);
    delayMicroseconds(40);  // ON time
    digitalWrite(3, LOW);
    delayMicroseconds(60);  // OFF time
  }

  // Half brightness (26.5% duty cycle)
  digitalWrite(LED_BUILTIN, LOW);
  for (long i = 0; i < 100000; i++) {
    digitalWrite(3, HIGH);
    delayMicroseconds(11);  // ON time
    digitalWrite(3, LOW);
    delayMicroseconds(88);  // OFF time
  }
}
