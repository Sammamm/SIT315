const int motionPin = 2;
const int ledPin = 13;

void setup(){
  Serial.begin(9600);
  pinMode(motionPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  int motion = digitalRead(motionPin);
  
  if(motion == HIGH){
    Serial.println("Motion");
    digitalWrite(ledPin, HIGH);
  }
  
  else if(motion == LOW){
    Serial.println("No Motion");
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}