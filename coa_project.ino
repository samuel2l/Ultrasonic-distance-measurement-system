float trigger=8;
float echo=9;
float led=A0;
float duration,distance;

void setup() {
  pinMode(led,OUTPUT);
  analogWrite(led,10);//dim
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
duration=pulseIn(echo,HIGH);
distance=(duration*0.034600)/2;
Serial.print("Distance: ");
Serial.print(distance);
Serial.print("cm");
delay(1000);
if(distance <=100){
  analogWrite(led,255);
}else{
  analogWrite(led,10);
}





}
