#include "timeOfDay.h"

TimeOfDay::TimeOfDay() //Default constructor
{
	iHours = 0;
	iMin = 0;
	iSeconds = 0;
}

TimeOfDay::TimeOfDay(int iH, int iM, int iS) //Constructor that takes hours, minutes and seconds arguments
{
	iHours = iH;
	iMin = iM;
	iSeconds = iS;
}

std::string TimeOfDay::toString() //Gives output in digital format
{
	return (to_string(iHours) + ":" + to_string(iMin) + ":" + to_string(iSeconds));
}

void TimeOfDay::increment()
{
	if (iSeconds < 59) //If seconds is less than 59, then add a second
	{
		iSeconds++;
	}
	else if (iMin < 59) //If minutes is less than 59, then add a minute and reset seconds to 0
	{
		iMin++; 
		iSeconds = 0;
	}
	else if (iHours < 23) //If hours is less than 23, then add an hour and reset minutes and seconds to 0
	{
		iHours++; 
		iMin = 0; 
		iSeconds = 0;
	}
	else //After 23:59:59 reset clock to 00:00:00
	{
		iHours = 0; 
		iMin = 0; 
		iSeconds = 0;
	}
}


bool TimeOfDay::isEqual(TimeOfDay other) //Sets a bool to test if clockShopTime (23:59:30) is equal to the time, or if it is less than
{
	if (iHours == other.iHours && iMin == other.iMin && iSeconds == other.iSeconds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TimeOfDay::isLessthan(TimeOfDay other)
{
	if ((iHours < other.iHours) || (iHours == other.iHours && iMin < other.iMin) || (iHours == other.iHours && iMin == other.iMin && iSeconds < other.iSeconds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
