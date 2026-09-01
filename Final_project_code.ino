#include <Servo.h>

Servo servox;
Servo servoy;
Servo servoz;
Servo servog;

void arm()
{
  servox.write(90);
  servoy.write(90);
  servoz.write(40);
  servog.write(0);

  delay(1000);
}

void setup()
{
  servox.attach(9);
  servoy.attach(10);
  servoz.attach(11);
  servog.attach(12);

  Serial.begin(9600);
  Serial1.begin(9600);

  arm();

  Serial.println("Robot arm ready");
}

void loop()
{
  if (Serial1.available() >= 2)
  {
    byte lowByte = Serial1.read();
    byte highByte = Serial1.read();

    unsigned int realservo =
        lowByte + ((unsigned int)highByte * 256);

    Serial.print("Value: ");
    Serial.println(realservo);

    // X servo
    if (realservo >= 1000 && realservo <= 1180)
    {
      int angle = map(realservo, 1000, 1180, 0, 180);

      servox.write(angle);

      Serial.print("X = ");
      Serial.println(angle);
    }

    // Y servo
    else if (realservo >= 2000 && realservo <= 2180)
    {
      int angle = map(realservo, 2000, 2180, 0, 180);

      servoy.write(angle);

      Serial.print("Y = ");
      Serial.println(angle);
    }

    // Z servo
    else if (realservo >= 3000 && realservo <= 3180)
    {
      int angle = map(realservo, 3000, 3180, 0, 180);

      servoz.write(angle);

      Serial.print("Z = ");
      Serial.println(angle);
    }

    // Gripper
    else if (realservo >= 4000 && realservo <= 4180)
    {
      int angle = map(realservo, 4000, 4180, 0, 180);

      servog.write(angle);

      Serial.print("Gripper = ");
      Serial.println(angle);
    }
  }
}