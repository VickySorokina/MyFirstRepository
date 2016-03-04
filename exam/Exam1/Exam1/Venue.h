/*****************************
I affirm that all code given below was written solely by me, Viktoria Sorokina,
and that any help I received adhered to the rules stated for this exam
******************************/
#include "Event.h"

#ifndef VENUE_H
#define VENUE_H
class Venue
{
private:
	Event scheduledEvents[12]; //venue can have up to 12 events
	static int numEvents; //number of events in the venue
	bool validTime(int time); //checks if time is available, returns true if is
public:
	void addEvent(int time, string name); //adds event to the venue
	Event findEvent(int time) const; //finds an event after its time and returns it
	Event findEvent(string name) const; //finds an event after its title and returns it
};
#endif 