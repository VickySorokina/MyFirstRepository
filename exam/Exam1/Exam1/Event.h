/*****************************
I affirm that all code given below was written solely by me, Viktoria Sorokina,
and that any help I received adhered to the rules stated for this exam
******************************/
#include <string>
using namespace std;

#ifndef EVENT_H
#define EVENT_H


class Event
{
private:
	int Time; //the time of the event
	string Title; //name of the event
public:
	Event(); //sets a default event
	Event(int time, string name); //sets a custom event with a certain time and name
	int getTime() const; //returns time of the event
	string getTitle() const; //returns name of the event
	void setTime(int t); //changes time of the event
	void setTitle(string name); //changes name of the event
};
#endif 