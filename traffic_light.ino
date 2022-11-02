//variables
int green1=2;
int yellow1=3;
int red1=5;
int green2=6;
int yellow2=7;
int red2=8;
void setup() {
  pinMode(green1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(red1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(red2,OUTPUT);
}

void loop() {
  digitalWrite(green1,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,HIGH);
  delay(5000);
  digitalWrite(green1,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yellow2,HIGH);
  digitalWrite(red2,LOW);
  delay(2000);
  digitalWrite(green1,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,LOW);
  delay(6000);
}
