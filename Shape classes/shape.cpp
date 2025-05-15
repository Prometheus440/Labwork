//Define shape class
#include "shape.h"

int Shape::calculateArea(int iHeightValue, int IWidthValue)
{
}

void Shape::setDimensions(int iHeightValue, int iWidthValue)
{
	iHeight = iHeightValue;
	iWidth = iWidthValue;
}

int Shape::getHeight(int iHeightValue)
{
	return iHeight;
}

int Shape::getWidth(int iWidthValue)
{
	return iWidth;
}
