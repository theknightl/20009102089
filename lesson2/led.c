// C++ code
//
int i=13,j=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK!");
}

void loop()
{
  for(i=13;i>=6;i--)
  {
  digitalWrite(i, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(i, LOW);
  delay(100); // Wait for 100 millisecond(s)
  }
}