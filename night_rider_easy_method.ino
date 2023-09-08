void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop() {

  int time= 1000;
  for (int i =1; i<11; i = i+1) {
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i, LOW);
  }

  for(int q=9; q>1; q--){
    digitalWrite(q, HIGH);
    delay(time);
    digitalWrite(q, LOW);
}

  
 

}
