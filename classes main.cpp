#include <iostream>
#include "MyFirstClass.h" //main.cpp must also include the header.h file

using namespace std;

int main()
{
	//Create an object of type MyFirstClass called MyFirstObject
	MyFirstClass myFirstObject;

	//Set the value of myFirstObject property (iNumber = 100)
	myFirstObject.setNumber(100);

	//Get the value of myFirstObject property and print to console
	cout << "Value in iNumber = " << myFirstObject.getNumber() << endl;

	return 0;
}
