int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3                 
int val = 0;  // variable to store the value read
int buzzerPin = 8;
int pinNONluce = 12;
int pinLuce = 11;


void setup() {
  Serial.begin(9600); //  setup serial
  pinMode(pinNONluce, OUTPUT);
  pinMode(pinLuce, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}



void loop() {
  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value

  if(val <= 500){

    digitalWrite(pinNONluce, HIGH); //si accende quello rosso
    digitalWrite(pinLuce, LOW);

    if(digitalRead(pinLuce) == LOW){
  tone(buzzerPin, 1000,500);
   delay(1000);
  
}

  }else{
    
    digitalWrite(pinNONluce, LOW); //si accende quello rosso
    digitalWrite(pinLuce, HIGH);

    if(digitalRead(pinNONluce) == LOW){
  tone(buzzerPin, 1000,500);
 delay(1000);
}
   }




    
  //delay(1000);
}
