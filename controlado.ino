const int led = 13;
int inByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    inByte = Serial.read();
    if(inByte == '1')
      digitalWrite(led,HIGH);
      else
      digitalWrite(led,LOW);
}

  
}
