//DECLARATION FILE

#include<string>

using namespace std;

class TimeOfDay
{
private:
	int iHours; //An attribute for hours
	int iMin; //for minutes
	int iSeconds; //and seconds
public:
	TimeOfDay(); //Default constructor
	TimeOfDay(int iH, int iM, int iS); //Constructor that takes hours, minutes, and seconds as an argument
	void increment(); //A method to increment by 1 second, but adds a minute if iS > 59 and same with an hour
	string toString(); //A method to print the time in digital format
	bool isEqual(TimeOfDay other); //A method to test if inputted time == 00:00:00
	bool isLessthan(TimeOfDay other); //A method to test if inputted time < 00:00:00

};

