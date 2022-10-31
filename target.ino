
int threshold = 800;
void setup()
{
  pinMode(A0, INPUT); // set the A0 which is the light diode to input; pull down resistor of 2.2k; 
  Serial.begin(9600);  
}

void loop()
{
  delay(10); //small 10ms delay so the arduino doesn't get overloaded;                                                                         
  CheckIfLaserIsOnSensor();
}

void CheckIfLaserIsOnSensor(){
  Serial.println(analogRead(A0)); // read the light diode
  if(analogRead(A0) < threshold){  // if the light diode value is less than 800 than pass
  Serial.println("PASSED Threshold");
  digitalWrite(13, HIGH);  //pass to this and turn on the relay switch to blow up capasitor 
  }else{
  	digitalWrite(13, LOW); // other wise turn off the relay
  	}
}


