String data[8] = {"a2a3", "b2b4", "c2c4", "d2d3", "e2e4", "f2f3", "g2g3", "h2h4"};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i<8; i++){
    Serial.println(data[i]);
    delay(1000);
    Serial.flush();
  }
  
}