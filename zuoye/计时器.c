// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a,b,c,d,e;
  b=1,d=0;
  e=0;
  c=digitalRead(2);
  
  for(a=1;a<=100;a++)
  {
    
  if(d==0) digitalWrite(4,1);
    {
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
    }
  if(d==1)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==2)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,0);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(11,0);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==3)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,1);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(11,0);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==4)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(4,1);
}
  if(d==5)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(11,0);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==6)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,0);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(11,0);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==7)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(11,0);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  if(d==8)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(4,1);
}
  if(d==9)
{
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,1);
  
  digitalWrite(4,1);
  digitalWrite(10,0);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
}
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,0);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,0);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(8,1);
  digitalWrite(9,1);
  digitalWrite(11,0);
  delay(1000);
  digitalWrite(12,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,1);
  delay(1000);
  digitalWrite(12,1);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(11,1);
  delay(1000);
  d++;
  }  
}
