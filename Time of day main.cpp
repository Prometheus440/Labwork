#include "MyFirstClass.h" //Must include the header file title - must also be set in the project setting to know what is the include and src folders

MyFirstClass::MyFirstClass()
{
	iNumber = 10;
}

MyFirstClass::MyFirstClass(int iValue)
{
	iNumber = iValue;
}

void MyFirstClass::setNumber(int iNewValue)
{
	iNumber = iNewValue;
}

int MyFirstClass::getNumber()
{
	return iNumber;
}
