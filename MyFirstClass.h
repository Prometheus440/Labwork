#pragma once
/*
	The header.h file is the class declaration
*/

class MyFirstClass
{
private:
	//An integer property/state
	int iNumber;

public:
	//Default constructor
	MyFirstClass(); //Has the same name as the class, and has no type

	//Overloaded constructor
	MyFirstClass(int iValue);

	//Setter to set the value for iNumber
	void setNumber(int iNewValue);

	//Getter to retrieve the value in iNumber
	int getNumber();

};
