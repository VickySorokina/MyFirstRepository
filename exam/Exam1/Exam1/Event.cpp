/*****************************
I affirm that all code given below was written solely by me, Viktoria Sorokina,
and that any help I received adhered to the rules stated for this exam
******************************/

#include "event.h"
#include <string>
using namespace std;

Event::Event(){ //empty constructor sets event to be free with time -1
	Time = -1;
	Title = "free";
}

Event::Event(int time, string name){ //non-empty constructor
	Time = time;
	Title = name;
}

int Event::getTime() const{ //returs time of an event
	return Time;
}

string Event::getTitle() const{ //returns title of an event
	return Title;
}

void Event::setTime(int t){ //sets time of an event
	Time = t;
}
 
void Event::setTitle(string name){ //sets title of an event
	Title = name;
}