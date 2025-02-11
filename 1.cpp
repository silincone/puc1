// C++ program to interchange the values of two variables using a third variable.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a, b, temp;

    // entering the values for the variables from the console.
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // printing the initial values of the two variables before interchanging.
    cout << "Before interchanging:\na: " << a << "\nb: " << b << "\n\n";

    // interchanging the values of the variables.
    temp = a;
    a = b;
    b = temp;

    // printing the values of the interchanged variables.
    cout << "After interchanging:\na: " << a << "\nb: " << b << "\n";
}