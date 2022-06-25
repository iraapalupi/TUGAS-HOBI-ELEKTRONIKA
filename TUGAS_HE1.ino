 const int pinPushButton = 9;
const int pinLed = 8;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinLed, OUTPUT);
  pinMode (pinPushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //jika pin 9 dapat sinyal digital (1/5V)
  //maka pin 8 keluarkan 1/5V
  buttonState = digitalRead(pinPushButton);

  //check if the pushbutton is pressed. If it is, the buttonstate is HIGH:
  if (buttonState == HIGH){
    //turn LED on:
    digitalWrite(pinLed, HIGH);
  } else {
    //turn LED off:
    digitalWrite(pinLed, LOW);
  }
}
