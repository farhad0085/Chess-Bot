String moves[8] = {"a2a3", "b2b4", "c2c4", "d2d3", "e2e4", "f2f3", "g2g3", "h2h4"};
int i = 0;

void setup() 
{
  for(int i = 5; i<=12; i++){
    pinMode(i,OUTPUT); 
    digitalWrite(i, LOW);
  }
  pinMode(28,OUTPUT); 
  digitalWrite(28, LOW);
  pinMode(34,OUTPUT); 
  digitalWrite(34, LOW);
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(moves[i]);
    
  if(Serial.available() > 0)
  {
    String data = Serial.readString();
    
    if(data == "e7e5")
    {
      digitalWrite(5, HIGH);
      delay(2000);
      digitalWrite(5, LOW);
    }
    else if(data == "d7d5" || data == "c7c5")
    {
      digitalWrite(6, HIGH);
      delay(2000);
      digitalWrite(6, LOW);
    }
    else if(data == "d5c4" || data == "c5b4")
    {
      digitalWrite(7, HIGH);
      delay(2000);
      digitalWrite(7, LOW);
    }
    else if(data == "d8d4" || data == "b8c6")
    {
      digitalWrite(8, HIGH);
      delay(2000);
      digitalWrite(8, LOW);
    }
    else if(data == "d4a1" || data == "g8f6")
    {
      digitalWrite(9, HIGH);
      delay(2000);
      digitalWrite(9, LOW);
    }
    else if(data == "a1b1" || data == "d8a5")
    {
      digitalWrite(10, HIGH);
      delay(2000);
      digitalWrite(10, LOW);
    }
    else if(data == "c4c3" || data == "b4b3")
    {
      digitalWrite(11, HIGH);
      delay(2000);
      digitalWrite(11, LOW);
    }
    else if(data == "c3c2" || data == "a5e1")
    {
      digitalWrite(12, HIGH);
      delay(2000);
      digitalWrite(12, LOW);
    }
    else if(data == "YOULOST")
    {
      digitalWrite(28, HIGH);
      delay(2000);
      digitalWrite(28, LOW);
    }
    else if(data == "YOUWON")
    {
      digitalWrite(34, HIGH);
      delay(2000);
      digitalWrite(34, LOW);
    }
  }
  i++;
}
