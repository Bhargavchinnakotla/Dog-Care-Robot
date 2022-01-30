#include <Servo.h>
#include <DS3231.h>

Servo qservo;

// Init the DS3231 using the hardware interface

DS3231 rtc(SDA, SCL);

const int led = 2;

const int buzz = 4;

const int onhourl = 12;

const int onmin1 = 1;

const int onhour2 = 12;

const int onmin2 = 2;

const int onhour3= 12;

const int onmin3 = 3;

const int onhour4 = 12;

const int onmin4 = 4;

const int onhour5 = 12;

const int onmin5 = 5;

const int onhour6= 12;

const int onmin6 = 6;

const int onhour7 = 12;

const int onmin7= 7;

const int onhour8 = 11;

const int onmin8 = 16;

const int onhour9 = 11;

const int onmin9 = 17; 

const int onhour10 = 11;

const int onmin10 = 18;

Time t;

void setup()

{
  Serial.begin(115200);

  rtc.begin();

  pinMode(led, OUTPUT);

  pinMode(buzz, OUTPUT);

  digitalWrite(led, HIGH);

  qservo.attach(6);

}

void loop()

{

  t = rtc.getTime ();
  Serial.print(rtc.getDOWStr());
  Serial.print("  ");


  Serial.print(rtc.getDateStr());
  Serial.print("--");

  Serial.printin(rtc.getTimeStr());
  delay(1000);


 if (t.hour = onhour9 && t.min == onmin9) {
   qservo.write(-90);
 delay (2000);

 qservo.write (90);

 digitalWrite (buzz, HIGH);

 delay (200);

 digitalWrite (buzz, LOW);

 delay (200);

 digitalWrite (buzz, HIGH);

 delay(200);

 digitalWrite (buzz, LOW);

 delay (57400);
  
}

t = rtc.getTime ();

Serial.print (rtc.getDOWStr());
Serial.print (" ");

// Send date
Serial.print (rtc.getDateStr());
Serial.print(" -- ");

//Send time
Serial.println(rtc.getTimeStr());
delay(1000);
