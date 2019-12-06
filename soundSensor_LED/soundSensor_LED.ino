boolean state;
#define ledPin 13
#define soundSensorPin 7

void setup() {
  pinMode(ledPin OUTPUT);
  pinMode(soundSensorPin, INPUT);
  state = false;
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(7));
  if(digitalRead(7) == 1){
    state =! state;
    digitalWrite(13, state);
    delay(100);
  }

  
  

}
