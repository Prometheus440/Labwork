//Declare square class (inherits from shape class)
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
	int calculateArea(int iHeightValue, int iWidthValue);
};

#endif SQUARE_H
