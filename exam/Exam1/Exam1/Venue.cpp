/*****************************
I affirm that all code given below was written solely by me, Viktoria Sorokina,
and that any help I received adhered to the rules stated for this exam
******************************/


#include "Venue.h"
#include <iostream>

using namespace std;

int Venue::numEvents = 0; //sets initial amount of events to be 0

bool Venue::validTime(const int time){ //checks if the time is available
	for (int i = 0; i < numEvents; i++){ //checks from all existing events if any already have the same time
		if (scheduledEvents[i].getTime() == time)
			return false; //if times do overlap, return false
	}
	return true; //otherwise returns true
}

void Venue::addEvent(int time, string name){ //adds an event to the venue
	if ((numEvents<12) && (validTime(time))){ //checks whether venue is already full or not, and if the time hasn't been taken already
		scheduledEvents[numEvents] = Event(time, name); //sets an event with given time and title
		numEvents++; //records that there are now 1 more event
		cout << "Event Scheduled!" << endl; //tells user that the event has been scheduled
	}
	else
		cout << "Couldn't schedule an event :(" << endl; //if couldn't schedule, tells that


}

Event Venue::findEvent(int time) const{ //finds an event given time
	for (int i = 0; i < numEvents; i++){ //from already existing events
		if (scheduledEvents[i].getTime() == time)
			return scheduledEvents[i]; //returns the event
	}
	return Event(); //otherwise returns empty event
}

Event Venue::findEvent(string name) const{ //finds an event given name
	for (int i = 0; i <= numEvents; i++){ //from existing events
		if (scheduledEvents[i].getTitle() == name)
			return scheduledEvents[i]; //retursn event
	}
	return Event(); //or empty event
}