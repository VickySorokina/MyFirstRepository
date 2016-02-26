/* exercise 9.2. Designing a class named Fan source file */

#include "fan.h"

//construct default fan object
fan::fan()
{
	speed = 1;
	on = false;
	radius = 5;
}


//turns fan on
void fan::turnOn()
{
	on = true;
}
//turns fan off
void fan::turnOff()
{
	on = false;
}
//sets new speed for the fan from settings 1 to 3 if the new speed given is within those limits
void fan::setSpeed(int newSpeed)
{
	if (newSpeed >= 1 && newSpeed <= 3)
		speed = newSpeed;
}
//sets new radius. if newradius is negative, radius is set to 0
void fan::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}


//functions that return of the fan is on or off (true/false), the radius of the fan. and its speed
bool fan::getStatus()
{
	return on;
}
double fan::getRadius()
{
	return radius;
}
int fan::getSpeed()
{
	return speed;
}