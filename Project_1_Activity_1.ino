void setup() { //Setup for code

  pinMode(32, OUTPUT);//output value for pin 32
  pinMode(34, OUTPUT);//output value for pin 34
  pinMode(38, OUTPUT);//output value for pin 38
  pinMode(26, OUTPUT);//output value for pin 26

  pinMode(6, OUTPUT);//output value for pin 6
  pinMode(9, OUTPUT);//output value for pin 9

  Serial.begin(9600);//begining at 9600 bits per second

}

void loop() {//looping code

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 150);//turning the PMW to 59% duty cycle

  digitalWrite(32, 1);//turning motor dirction on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 0);//turning motor direction off
  digitalWrite(26, 1);//turning motor direction on

  delay(3100);//delay 3.1 seconds for going straight 1m

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 180);//turning the PMW to 71% duty cycle

  digitalWrite(32, 1);//turning motor direction on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 1);//turning motor direction on
  digitalWrite(26, 0);//turning motor direction off

  delay(1050);//delay 1.1 second for turning left

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 150);//turning the PMW to 59% duty cycle

  digitalWrite(32, 1);//turning motor dircetion on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 0);//turning motor direction off
  digitalWrite(26, 1);//turning motor direction on

  delay(3100);// delay 3.1 seconds for going straight 1m

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 180);//turning the PMW to 71% duty cycle

  digitalWrite(32, 1);//turning motor direction on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 1);//turning motor direction on
  digitalWrite(26, 0);//turning motor direction off

  delay(1050);//delay 1.1 second for turning left

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 150);//turning the PMW to 59% duty cycle

  digitalWrite(32, 1);//turning motor direction on 
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 0);//turning motor direction off
  digitalWrite(26, 1);//turning motor direction on

  delay(3100);//delay 3.1 seconds for going straight 1m 

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 180);//turning the PMW to 71% duty cycle

  digitalWrite(32, 1);//turniing motor direction on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 1);//turning motor direction on
  digitalWrite(26, 0);//turning motor direction off

  delay(1050);//delay 1.1 second for turning left

  analogWrite(6, 180);//turning the PMW to 71% duty cycle
  analogWrite(9, 150);//turning the PMW to 59% duty cycle

  digitalWrite(32, 1);//turning motor direction on
  digitalWrite(34, 0);//turning motor direction off

  digitalWrite(38, 0);//turning motor direction off
  digitalWrite(26, 1);//turning motor direction on

  delay(3100);//delay 3.1 seconds for going straight 1m

  analogWrite(6, 180);;//turning the PMW to 71% duty cycle
  analogWrite(9, 150);//turning the PMW to 59% duty cycle

  digitalWrite(32, 0);//turning motor direction off
  digitalWrite(34, 1);//turning motor direction on
  
  digitalWrite(38, 1);//turning motor direction on
  digitalWrite(26, 0);//turning motor direction off

  delay(3100);//delay 3.1 seconds going backwards 1m

  analogWrite(6,0);//turning to 0% duty cycle
  analogWrite(9,0);//turning to 0% duty cycle

  delay(20000);// delay 20 seconds to stop 


}
