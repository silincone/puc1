// C++ program to find the factorial of a number using for statement.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int number, i, factorial;

    // entering the values for the variables from the console.
    cout << "Enter a number: ";
    cin >> number;

    // calculating the factorial of the given number.
    factorial = 1;
    for(i = 1; i <= number; ++i)
        factorial *= i;

    // printing the result obtained to the console.
    cout << number << "! (factorial) is: " << factorial;
}