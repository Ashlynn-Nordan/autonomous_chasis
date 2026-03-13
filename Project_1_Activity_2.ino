int right = 0;//initalizing right to 0
int left = 0;//initalizing left to 0
int back = 0;//initalizing back to 0

void setup() { //setup for code

  pinMode(49, INPUT);//input value for pin 49
  pinMode(51, INPUT);//input value for pin 51
  pinMode(23, INPUT);//input value for pin 23

  pinMode(32, OUTPUT);//output value for pin 32
  pinMode(34, OUTPUT);//output value for pin 34
  pinMode(38, OUTPUT);//output value for pin 38
  pinMode(26, OUTPUT);//output value for pin 26

  pinMode(6, OUTPUT);//output value for pin 6
  pinMode(9, OUTPUT);//output value for pin 9

  Serial.begin(9600);//begining at 9600 bits per second

}

void loop() {//looping code
  
  left = digitalRead(49);//reading value from pin 49 and put in left
  right = digitalRead(51);//reading value from pin 51 and put in right
  back = digitalRead(23);//reading value from pin 23 and put on the back

  Serial.println(left);//printing value for left
  Serial.println(right);//printing value for right
  Serial.println(back);//printing value for the back

 if (right == 0 && left ==0  && back == 1) //checking if anything is infront of the left and right IR sensors
{
  analogWrite(6, 180);//71% duty cycle
  analogWrite(9, 180);//71 % duty cycle

  digitalWrite(32, 0);//left tire motor of
  digitalWrite(34, 1);//left tire motor on

  digitalWrite(38, 1);//right tire motor on
  digitalWrite(26, 0);//right tire motor off
  
  

}
else if (left == 0)//checking if anything is infront of the left sensor
{
  analogWrite(6, 127);// set to 50% duty cycle
  analogWrite(9, 255);//set to 100% duty cycle

  digitalWrite(32, 0);//left tire motor off
  digitalWrite(34, 1);//left tire motor on

  digitalWrite(38, 0);//right tire motor off
  digitalWrite(26, 1);//right tire motor on

 

}

else if (right == 0)//checking if anything is infront of the right sensor
{
  analogWrite(6, 255);//100% duty cycle
  analogWrite(9, 127);//50% duty cycle

  digitalWrite(32, 1);//left tire motor on
  digitalWrite(34, 0);//left tire motor off

  digitalWrite(38, 1);//right tire motor on
  digitalWrite(26, 0);//right tire motor off

  
}
else if (back == 0)//checking if anything is infront of the right sensor
{
  analogWrite(6, 180);//71% duty cycle
  analogWrite(9, 180);//71 % duty cycle

  digitalWrite(32, 1);//left tire motor on
  digitalWrite(34, 0);//left tire motor off

  digitalWrite(38, 0);//right tire motor off
  digitalWrite(26, 1);//right tire motor on

 
}
else// if there is nothing in front of the sensors
{
  analogWrite(6,180);//71% duty cycle
  analogWrite(9,180);//71% duty cycle

  digitalWrite(32, 1);//left tire motor on
  digitalWrite(34, 0);//left tire motor off

  digitalWrite(38, 0);//right tire motor off
  digitalWrite(26, 1);//right tire motor on

}
}
