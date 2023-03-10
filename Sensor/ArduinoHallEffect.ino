
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT);
}

void loop(){
  int sensorVal = digitalRead(2);

  if(!sensorVal){
    Serial.println("There is a magnet!");
  }

//  If  wanting to use analog instead (switch pins)
//  int analogSensor = analogRead(0);
//  Serial.println(sensorVal);
}
