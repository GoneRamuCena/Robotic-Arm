# include <Servo.h>

Servo servox;   // for servo along x
Servo servoy;   // for servo along y
Servo servoz;   // for servo along z 
Servo servog;   // for gripper

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
  arm();
  // put your setup code here, to run once:

  Serial.begin(9600);

}
void loop()
{
  arm();
  servox.write(60);
  delay(1000);
  
  servoy.write(60);
  delay(1000);

  
  servoz.write(75);
  delay(1000);

  
  servog.write(75);
  delay(1000);
}
void loop_trial() 
{
  // put your main code here, to run repeatedly:
  int angles[5] = {0,60,90,120,180};

  // for (int i : angles )
  // {
  //   servox.write(i);
  //   servoy.write(i);
  //   servoz.write(i);
  //   servog.write(i);
  //   Serial.print("Angle = ");
  //   Serial.println(i);
  //   delay(3000);
  // }
}
