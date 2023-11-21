int thr;
int valore=0;

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  
  thr = 752;

}

void loop() {
  valore=analogRead(A0);
  Serial.println(valore);
  if(valore<thr){
    digitalWrite(2, HIGH);      //soglia massima letta
  }
  else{
    digitalWrite(2, LOW);       //soglia minima letta
  }
  delay(200);

}
