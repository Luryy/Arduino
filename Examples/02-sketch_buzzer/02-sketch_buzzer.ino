int buzzer = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 1500); // (pin, frequency, time-on )
  delay(200);
  tone(buzzer, 2000);
  delay(200);
  
}
