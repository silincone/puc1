// C++ program to find the sum of all the digits of a number using while statement.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int number, tempVariable, remainder, sum = 0;

    // entering the values for the variables from the console.
    cout << "Enter a number: ";
    cin >> number;

    // calculating the sum of all the digits of the given number.
    tempVariable = number;
    while(number != 0)
    {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    // printing the sum of all the digits of the given number to the console.
    cout << "Sum of all digits present in " << tempVariable << " is: " << sum;
}