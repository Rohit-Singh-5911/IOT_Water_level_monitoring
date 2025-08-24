
#define trigPin D2    
#define echoPin D1
#define ledPin D0
#define ledPin1 D3
#define ledPin2 D5
#define buzzerPin D6

void setup() {

Serial.begin(9600);

// set input/output pins
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(ledPin, OUTPUT);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(buzzerPin,OUTPUT);

}
 
void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// measure the duration of the pulse
long duration = pulseIn(echoPin, HIGH);

// calculate the distance in centimeters
int distance = duration / 58;

// check if the distance is greater than 60cm
if (distance > 10) {
digitalWrite(ledPin, HIGH); // turn on LED
} else {
digitalWrite(ledPin, LOW); // turn off LED
}
if ((distance >6) && (distance<10)) {
digitalWrite(ledPin1, HIGH); // turn on LED
} else {
digitalWrite(ledPin1, LOW); // turn off LED
}
if ((distance <6)) {
digitalWrite(ledPin2, HIGH); // turn on LED
digitalWrite(buzzerPin,HIGH);
} else {
digitalWrite(ledPin2, LOW); // turn off LED
digitalWrite(buzzerPin, LOW);
}




// print the distance to the serial monitor
Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");

// wait for a moment before taking the next reading
delay(500);
}
