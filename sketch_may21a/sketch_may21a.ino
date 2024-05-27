#include <DHT11.h>
#define porta A0

DHT11 sensor(porta);
void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = sensor.readTemperature();
  Serial.print(temp);
  delay(1000);

}
