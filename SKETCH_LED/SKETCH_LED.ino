int pin = 8;
int btn = 4;

void setup() {
  pinMode(pin,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  if(digitalRead(btn) == HIGH){
    
    digitalWrite(pin,HIGH); 
     
  }

}
