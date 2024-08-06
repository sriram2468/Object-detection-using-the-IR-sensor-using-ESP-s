
int iR = D0;
void setup() 
{
  Serial.begin(9600);
  pinMode(iR, INPUT);
  

}

void loop() 
{
  int s = digitalRead(iR);
  Serial.println(s);
  if(s=1)
  {
    Serial.print(" Objected Detected");
  }
  delay(1000);
  
}
