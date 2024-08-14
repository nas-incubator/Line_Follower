// The Code is modified and written for NAS Incubator

//////////////////////////////////////////////////////////////////////////

// Define motor pins
int motorLeftBackward = 5;    
int motorLeftForward = 4;

int motorRightBackward = 3;   
int motorRightForward = 2;

// Define sensor pins
#define RIGHT_SENSOR 6        
#define LEFT_SENSOR 7         

void setup() {
  // Set motor pins as output
  pinMode(motorLeftBackward, OUTPUT); 
  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
//Speed Control
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  // Set sensor pins as input
  pinMode(LEFT_SENSOR, INPUT);         
  pinMode(RIGHT_SENSOR, INPUT);
}

void loop() {

  analogWrite(9,45); //right motor rpm
  analogWrite(10,45); //left motor rpm
  
  // Read sensor values
  int leftSensorValue = digitalRead(LEFT_SENSOR);
  int rightSensorValue = digitalRead(RIGHT_SENSOR);
  
  // Determine motor actions based on sensor values
  if (leftSensorValue == HIGH && rightSensorValue == HIGH) { //signal receiving on both sensor
    
    moveForward(); // Move forward function
  } else if(leftSensorValue == LOW && rightSensorValue == HIGH){ //signal only receiving on right sensor
    
    turnLeft(); // turns left function
  }else if(leftSensorValue == HIGH && rightSensorValue == LOW) //signal only on left sensor
  {
    turnRight();  // turns right function
  }else
  {
    stop(); //both sensors are HIGH ie not receiving signals
  }
}

void moveForward() {
  
  digitalWrite(motorLeftBackward, LOW); //Move Forward
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  
}

void turnLeft()
{
  digitalWrite(motorLeftBackward, LOW);  //Turn left 
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, HIGH); 
  
}

void turnRight() {
 
  digitalWrite(motorLeftBackward, LOW);  //Turn Right 
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, LOW); 
  

}

void stop()
{
  digitalWrite(motorLeftBackward, LOW);   //Stop
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, LOW); 
}





