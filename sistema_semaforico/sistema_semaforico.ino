//il sistema fotosensore

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {  
  int v = analogRead(A0);

  Serial.println(v);
  if (v < 10) {
    digitalWrite(13, HIGH);  
    digitalWrite(12, HIGH); 
    digitalWrite(11, HIGH); 
  } else {
    digitalWrite(13, LOW);  
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }  
  delay(200);
}
