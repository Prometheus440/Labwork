//Declare shape class
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	//will have 2 properties
	//height and width
protected:
	int iHeight;
	int iWidth;

	int calculateArea(int iHeightValue, int iWidthValue);

	void setDimensions(int iHeightValue, int iWidthValue);
	int getHeight(int iHeightValue);
	int getWidth(int iWidthValue);
};

#endif // SHAPE_H
