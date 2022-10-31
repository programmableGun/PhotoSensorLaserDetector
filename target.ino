//
int threshold = 800;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  delay(10); //small 10ms delay so the arduino doesn't get overloaded;                                                                         
  CheckIfLaserIsOnSensor();
}

void CheckIfLaserIsOnSensor(){
  Serial.println(analogRead(A0));
  if(analogRead(A0) < threshold){
  Serial.println("PASSED Threshold");
  digitalWrite(13, HIGH);
  }else{
  	digitalWrite(13, LOW);
  	}
}

