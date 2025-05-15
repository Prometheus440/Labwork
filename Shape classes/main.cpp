#include <iostream>
#include "square.h"

using namespace std;

/*
    Defines shape class with constructors and properties (width and height)
    Implement methods that calculate the area of the shape (overwrite the method like speak())
    Get and set the height and width properties
    Define 3 derived classes - square, rectangle and triangle that inherit the shape class
*/

int main()
{
    Square bluesquare;

    bluesquare.calculateArea(5, 6);

    system("PAUSE");
    return 0;
}
