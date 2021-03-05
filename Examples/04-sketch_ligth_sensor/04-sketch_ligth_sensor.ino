int valor = 0, led = 2, sun = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sun, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(A0);
  Serial.println(valor);
  if (valor < 230) {
    digitalWrite(led, HIGH);
    digitalWrite(sun, LOW);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(sun, HIGH);
  }
  delay(500);
}
