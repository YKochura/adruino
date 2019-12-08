boolean state; 
#define ledPin 13            // LED connected to 13D   
#define soundSensorPin 7    // sound sensor connected to 7D

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
