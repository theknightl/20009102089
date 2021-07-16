// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK!");
}

void loop()
{
  int i,j,k;
  while(Serial.available()>0)
  {  i=Serial.read();
     i=i-'0';
   for(j=10;j>=0;j--)
   {
     switch(i)
  {
       case 0:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(7, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       //digitalWrite(8, HIGH);
       break;
       case 1:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       //digitalWrite(2, HIGH);
       //digitalWrite(3, HIGH);
       //digitalWrite(4, HIGH);
       //digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       digitalWrite(7, HIGH);
       //digitalWrite(8, HIGH);
       break;
       case 2:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       //digitalWrite(4, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(5, HIGH);
       //digitalWrite(7, HIGH);
       digitalWrite(6, HIGH);
       break;
       case 3:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       //digitalWrite(7, HIGH);
       //digitalWrite(6, HIGH);
       digitalWrite(5, HIGH);
       break;
       case 4:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       //digitalWrite(2, HIGH);
       digitalWrite(8, HIGH);
       //digitalWrite(5, HIGH);
       //digitalWrite(6, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(7, HIGH);
       break;
       case 5:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       //digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       //digitalWrite(6, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(7, HIGH);
       break;
       case 6:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       //digitalWrite(3, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       digitalWrite(7, HIGH);
       break;
       case 7:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       //digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       //digitalWrite(5, HIGH);
       //digitalWrite(6, HIGH);
       //digitalWrite(7, HIGH);
       break;
       case 8:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(6, HIGH);
       digitalWrite(7, HIGH);
       break;
       case 9:
       for(k=8;k>=2;k--)
       {digitalWrite(k, LOW);}
       digitalWrite(8, HIGH);
       digitalWrite(2, HIGH);
       digitalWrite(3, HIGH);
       digitalWrite(4, HIGH);
       //digitalWrite(6, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(7, HIGH);
       break;
       default:
       break;
  }
   }
  }
}