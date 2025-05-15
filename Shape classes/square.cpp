//Define square class (inherits from shape class)

#include "square.h"
#include <iostream>

using namespace std;

int Square::calculateArea(int iHeightValue, int iWidthValue)
{
	iHeight = iHeightValue;
	iWidth = iWidthValue;
	int iArea = iHeight * iWidth;

	return iArea;
}
