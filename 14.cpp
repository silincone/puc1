// C++ program to check whether a given number is a power of 2.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int number, tempVariable;

    // entering the values for the variables from the console.
    cout << "Enter a number: ";
    cin >> number;

    // checking whether the given number is a power of 2 or not.
    tempVariable = number;
    while(tempVariable > 2)
    {
        if((tempVariable % 2) == 1)
            break;
        else
            tempVariable /= 2;
    }

    // printing the result to the console.
    if((tempVariable % 2) == 1)
        cout << number << " is not a power of 2.";
    else
        cout << number << " is a power of 2.";
}