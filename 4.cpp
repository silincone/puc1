// C++ program to find the area of a triangle from values given for the three sides of the triangle.
#include <iostream>
#include <math.h>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    float side1, side2, side3, semiPerimeter, area;

    // entering the values for the variables from the console.
    cout << "Enter the lengths for the three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    // calculating the semi-perimeter.
    semiPerimeter = (side1 + side2 + side3) / 2;

    // calculating the area of the triangle.
    area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    // printing the calculated area of the triangle.
    cout << "Area: " << area;
}