const int LED_1 = 12;
const int LED_2 = 11;
const int LED_3 = 10;
const int LED_4 = 9;
const int LED_5 = 8;

int LED_1_ON_DUR = 300;
int LED_1_OFF_DUR= 000;
int LED_2_ON_DUR = 300;
int LED_3_ON_DUR = 300;
int LED_3_OFF_DUR= 000;
int LED_4_ON_DUR = 300;
int LED_4_OFF_DUR= 000;
int LED_5_ON_DUR = 300;
int LED_5_OFF_DUR= 000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1,HIGH);
  delay(LED_1_ON_DUR);
  digitalWrite(LED_1,LOW);
  delay(LED_1_OFF_DUR);
  
  digitalWrite(LED_2,HIGH);
  delay(LED_2_ON_DUR);
  digitalWrite(LED_2,LOW);
  
  
  digitalWrite(LED_3,HIGH);
  delay(LED_3_ON_DUR);
  digitalWrite(LED_3,LOW);
  delay(LED_3_OFF_DUR);
  
  digitalWrite(LED_4,HIGH);
  delay(LED_4_ON_DUR);
  digitalWrite(LED_4,LOW);
  delay(LED_4_OFF_DUR);

  digitalWrite(LED_5,HIGH);
  delay(LED_5_ON_DUR);
  digitalWrite(LED_5,LOW);
  delay(LED_5_OFF_DUR);
}
