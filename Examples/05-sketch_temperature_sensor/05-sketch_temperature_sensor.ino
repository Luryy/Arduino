#include <Thermistor.h>

Thermistor temp(A0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temperature = temp.getTemp();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" ºC");
  delay(2000);
}
