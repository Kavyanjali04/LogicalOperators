void setup() {
  Serial.begin(9600);
  int a,b;
  a=7,b=5;
  if(a==5 && b==5)
  {
    Serial.println("Both conditions are same");
  }
  else
  {
    Serial.println("Both Conditions are not same");
  }
  if(a==7 || b==5)
  {
    Serial.println("one conditions is same");
  }
  else
  {
    Serial.println("none of the Condition is same");
  }
}

void loop() {
  

}
