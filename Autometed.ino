int analog=A0;
void setup() {
  pinMode(2,INPUT);       //ir1
  pinMode(3,INPUT);       //ir2
  pinMode(4,INPUT);       //ir3
  pinMode(5,INPUT);       //ir4
  
  pinMode(analog,INPUT);       //ldr
  
  pinMode(6,OUTPUT);       //led1
  pinMode(7,OUTPUT);       //led2
  pinMode(8,OUTPUT);       //led3
  pinMode(9,OUTPUT);       //led4
  pinMode(10,OUTPUT);       //led5
  pinMode(11,OUTPUT);       //led6
}

void loop() {
  if(analogRead(analog)<200)
  {
    if(digitalRead(2)==HIGH)
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
    }

    if(digitalRead(3)==HIGH)
    {
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
    }

    if(digitalRead(4)==HIGH)
    {
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    }

    if(digitalRead(5)==HIGH)
    {
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
    }
  }

}
