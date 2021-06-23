#include<Servo.h>
#define servopin 9
#define ldrpin A0
int ldrval;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(servopin);
delay(1000);
myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
ldrval=analogRead(ldrpin);
delay(100);
Serial.println(ldrval);
if(ldrval<275){
  myservo.write(90);
 delay(100);
}
else if(ldrval>280 ){
  myservo.write(0);
}
}
