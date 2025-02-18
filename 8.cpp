// C++ program to check whether the given year is leap year or not. (Using if-else statement)
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int year;

    // entering the values for the variables from the console.
    cout << "Enter an year: ";
    cin >> year;

    // checking whether the given year is leap year or not and printing the same.
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";
}