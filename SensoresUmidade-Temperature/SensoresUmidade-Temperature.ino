#include <DHT11.h>
#define port A0


DHT11 sensor(port);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(500);
  temperatura();
  umidade();

}

void temperatura(){
  Serial.print("temperatura : ");
  Serial.print(sensor.readTemperature());
  Serial.println("C \n");
}
void umidade(){
  Serial.print("umidade :");
  Serial.print(sensor.readHumidity());
}
