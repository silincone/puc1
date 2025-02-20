// C++ program to find the area and circumference of a circle.
#include <iostream>

#define PI 3.14159

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    float radius, area, circumference;
    cout << "Enter the radius of a circle: ";
    cin >> radius;

    // calculating the area of a circle with given radius.
    area = PI * radius * radius;

    // calculating the circumference of a circle with given radius.
    circumference = 2 * PI * radius;

    // printing the calculated area and circumference.
    cout << "Area: " << area << "\n";
    cout << "Circumference: " << circumference;
}
