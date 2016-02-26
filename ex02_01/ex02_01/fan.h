/* exercise 9.2. Designing a class named Fan header file
UML:

fan
------------
-speed: int
-on: bool
-radius: double
-----------
+fan()

+setSpeed(newSpeed: int): void
+turnOn(): void
+turnOff(): void
+setRadius(newRadius: double): void

+getStatus(): bool
+getRadius(): double
+getSpeed(): int
*/

#ifndef FAN_H
#define FAN_H

class fan
{
private:
	//speed of the fan
	int speed;
	//returns true if fan is on
	bool on;
	//radius of the fan
	double radius;
public:
	//constructor for default fan settings
	fan();

	//turns fan on and off
	void turnOn();
	void turnOff();
	//set radius of the fan
	void setRadius(double);
	//set speed of the fan
	void setSpeed(int);

	//functions that return of the fan is on or off (true/false), the radius of the fan. and its speed
	bool getStatus();
	double getRadius();
	int getSpeed();
};
#endif