void setup() {
  // pin 0,1,2,3を出力に設定．
   pinMode(0,OUTPUT);
   pinMode(1,OUTPUT);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
}

void loop() {
  // pin 1を1000ms光らす．
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  delay(1000);
}
