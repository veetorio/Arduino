#include <DHT11.h>
#define fan 13
#define port_i A0

DHT11 sensor(port_i);
void setup() {
  pinMode(fan,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(temp());
  if(temp() >= 30.00){
    digitalWrite(fan,true);
    }else{
        digitalWrite(fan,false);
    }
  delay(100);
}

float temp(){
  return sensor.readTemperature();
}
