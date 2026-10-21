 //LED PINS
 const int GREEN_LED = 2;
 const int BLUE_LED = 4;
 const int YELLOW_LED = 7;
 const int WHITE_LED = 6;
 
 //in milli seconds 
 const int GREEN_LED_DUR = 300;
 const int BLUE_LED_DUR = 300;
 const int YELLOW_LED_DUR = 300;
 const int WHITE_LED_DUR = 300;
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(WHITE_LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN_LED,HIGH);
  digitalWrite(BLUE_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  delay(GREEN_LED_DUR);

  digitalWrite(GREEN_LED,LOW);
  digitalWrite(BLUE_LED,HIGH);
  digitalWrite(YELLOW_LED,LOW);
  delay(BLUE_LED_DUR);

  digitalWrite(GREEN_LED,LOW);
  digitalWrite(BLUE_LED,LOW);
  digitalWrite(YELLOW_LED,HIGH);
  delay(YELLOW_LED_DUR);

  //digitalWrite

}
