#include <NewPing.h>// kutuphaneye gerek yok direk yapalim
#include <Servo.h>
Servo myservo;

#define TRIGGER_PIN  15
#define ECHO_PIN     14
#define MAX_DISTANCE 400

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // kutuphaneye gerek yok direk yapalim

void setup() {
  myservo.attach(21);
  myservo.write(20);
}

void loop() {
  
  delay(50);
  int distance=sonar.ping_cm();// kutuphaneye gerek yok direk yapalim

  if(distance<10){

    int x=70;
    int y=20;
    delay(2000);
    myservo.write(x);
    delay(2000);
    myservo.write(y);
  }
}
