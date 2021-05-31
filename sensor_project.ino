int pinir=2;
int pinCamera=12;
int pinBuzzer =13;
int pirSensor =0;
long distance;
float sensor = 0;
int cm = 0;
void setup()
{
  pinMode(pinir, INPUT);
  pinMode(pinCamera, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}
//void loop()
//{
//  sensor = analogRead(0);
//  if(distance <=30){
//  Serial.println("Infinite distance!");
//  } else if (sensor<100)
// {
// cm = 80;
// } else if (sensor<110)
// {
// cm = 70;
// }
//else if (sensor<118) {
//  cm=60;
//{
//  pinir= digitalRead(pinir);
//  if (pirSensor == HIGH)
//  {
//  pinir= digitalRead(pinir);
//  }
//
//  else if (pirSensor == HIGH){
//  }
//
//  }
//    digitalWrite(pinCamera, HIGH);
//    tone(pinBuzzer, 1000, 500);
//  }
//  else {
//    digitalWrite(pinCamera, LOW);
//  }
//  delay(10);
// }
