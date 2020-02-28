void setup() {
  // put your setup code here, to run once:
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(7,OUTPUT);

 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
 pinMode(A3,INPUT);
 pinMode(A4,INPUT);
 Serial.begin(9600);


}
 int Q1=7;
 int Q2=8;
 int Q3=9;
 int Q4=10;
void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(A4,HIGH);
 digitalWrite(A0,LOW);
 int x=analogRead(A3);
 int y=analogRead(A2);
 Serial.print(x);
 Serial.print('\t');
 Serial.println(y);

  if(x<340)      // Change the value for adjusting sensitivity  
      forward();
  else if(x>400) // Change the value for adjusting sensitivity
      backward();
  else if(y>400) // Change the value for adjusting sensitivity
      right();
  else if(y<340) // Change the value for adjusting sensitivity
      left();
  else
      stop_();
}
  void stop_()
{
//  Serial.println("");
//  Serial.println("STOP");
  digitalWrite(Q1,LOW);
  digitalWrite(Q2,LOW);
  digitalWrite(Q3,LOW);
  digitalWrite(Q4,LOW);
}
void forward()
{
//  Serial.println("");
//  Serial.println("Forward");
  digitalWrite(Q1,HIGH);
  digitalWrite(Q2,LOW);
  digitalWrite(Q3,HIGH);
  digitalWrite(Q4,LOW);
}
void backward()
{
//  Serial.println("");
//  Serial.println("Backward");
  digitalWrite(Q1,LOW);
  digitalWrite(Q2,HIGH);
  digitalWrite(Q3,LOW);
  digitalWrite(Q4,HIGH);
}
void left()
{
//  Serial.println("");
//  Serial.println("Left");
  digitalWrite(Q1,LOW);
  digitalWrite(Q2,HIGH);
  digitalWrite(Q3,HIGH);
  digitalWrite(Q4,LOW);
}
void right()
{
//  Serial.println("");
//  Serial.println("Right");
  digitalWrite(Q1,HIGH);
  digitalWrite(Q2,LOW);
  digitalWrite(Q3,LOW);
  digitalWrite(Q4,HIGH);
}
