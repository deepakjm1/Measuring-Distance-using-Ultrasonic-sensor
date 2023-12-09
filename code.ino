  // MEASURING DISTANCE USING ULTRASONIC SENSOR

#define echoPin 2                           //connect echo pin of ultrasonic sensor to D2 pin of Arduino
#define trigPin 3                           //connect trigger pin of ultrasonic sensor to D3 pin of Arduino
int distance ,duration;                     //declare variables to hold duration and distance


void setup() {
 Serial.begin(9600);                         //set the baud rate of serial communication to 9600
 pinMode(trigPin,OUTPUT);                    //set trigPin as output pin of Arduino
 pinMode(echoPin,INPUT);                     //set echoPin as input pin of Arduino
}

void loop() {
 digitalWrite(trigPin,LOW);                  //generate square wave at trigger pin
 delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);

 duration=pulseIn(echoPin,HIGH);              //calculating the distance of the obstacle  
 distance=(duration*0.034/2);
 Serial.print("Diatance:  ");
 Serial.print(distance);
 Serial.println("cm");
 delay(1000);
 
 // OPEN THE SERIAL MONITOR TO VIEW THE DISTANCE 
}
