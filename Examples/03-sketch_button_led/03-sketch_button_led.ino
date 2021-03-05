int led = 2, button = 3, pressionado=0, ligado=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pressionado = digitalRead(button);
  if (pressionado == HIGH){
    delay(500);
    switch(ligado){
      case 0:
        digitalWrite(led, HIGH);
        ligado = 1;
        break;
      case 1:
      digitalWrite(led, LOW);
        ligado = 0;
        break;
    }
  }
}
