void setup() {
  pinMode(8, OUTPUT); //IN2
  pinMode(9, OUTPUT); //IN1
    pinMode(10, OUTPUT); //IN2
  pinMode(11, OUTPUT); //IN1
}
void loop() {

// Full speed forward
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
   digitalWrite(10, HIGH);
  digitalWrite(11, LOW);


  delay(3000);

// Full speed backward
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
   digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  delay(3000);

// 0 to 100% speed in forward mode
  for (int i=0;i<256;i++)
  {   digitalWrite(8, HIGH);
      analogWrite(9, i);
      digitalWrite(10, HIGH);
      analogWrite(11, i);
      delay(20);      
      }

  delay(50);

  // 0 to 100% speed in backward mode
        for (int i=255;i<0;i--)
  {   digitalWrite(8, LOW);
      analogWrite(9, i);
       digitalWrite(10, HIGH);
      analogWrite(11, i);
      delay(20);      
      }

        delay(50);
}
