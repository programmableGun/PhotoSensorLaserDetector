//
int threshold = 800;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  Serial.println(analogRead(A0));
  delay(10); // Delay a little bit to improve simulation performance
  if(analogRead(A0) < threshold){
  Serial.println("PASSED Threshold");
  digitalWrite(13, HIGH);
  }else{
  	digitalWrite(13, LOW);
  	}
}