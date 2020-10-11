const int switchPin = 2;
const int motorPin = 9;

int switchState = 0;
int motorState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);
  if(switchState == HIGH && motorState != 1){
    motorState = 1;
  } else if (switchState == HIGH && motorState == 1){
    motorState =0;
  }
  if (motorState == 1) {
    digitalWrite(motorPin, HIGH);
  }
  else {
    digitalWrite(motorPin, LOW);
  }
}
