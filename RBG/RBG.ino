int r=2;
int g=3;
int b=4;

void setup() {
  // put yoursetup  code here, to run once:
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r,HIGH);
delay(3000);
digitalWrite(r,LOW);
delay(3000);
digitalWrite(g,HIGH);
delay(3000);
digitalWrite(g,LOW);
delay(3000);
digitalWrite(b,HIGH);
delay(3000);
digitalWrite(b,LOW);
delay(3000);
digitalWrite(r,HIGH);
digitalWrite(g,HIGH);
delay(3000);
digitalWrite(r,LOW);
digitalWrite(g,LOW);
delay(3000);
digitalWrite(g,HIGH);
digitalWrite(b,HIGH);
delay(3000);
digitalWrite(g,LOW);
digitalWrite(b,LOW);
delay(3000);
digitalWrite(b,HIGH);
digitalWrite(r,HIGH);
delay(3000);
digitalWrite(b,LOW);
digitalWrite(r,LOW);
delay(3000);
digitalWrite(r,HIGH);
digitalWrite(g,HIGH);
digitalWrite(b,HIGH);
delay(3000);
digitalWrite(r,LOW);
digitalWrite(g,LOW);
digitalWrite(b,LOW);
delay(3000);
}
