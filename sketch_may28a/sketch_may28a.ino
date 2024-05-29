#include <DHT11.h>
#define fan 3
#define registrador_led 13
#define porta_sensor A0

DHT11 sensor(porta_sensor);


void setup() {
  pinMode(fan,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(register_temperatura());
  if(register_temperatura > 25){
   digitalWrite(fan,true);
  }
 
}

float register_temperatura(){
  digitalWrite(registrador_led,true);
  delay(10);
  float valor = sensor.readTemperature();
  digitalWrite(registrador_led,false);
  delay(10);

  return valor;
}
