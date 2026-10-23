const int trig=10;
const int echo=9;

float duration;
float distance; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}
