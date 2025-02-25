// C++ program to generate the fibonacci sequence up to a limit using for statement.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int limit, first, second, third, count;

    // entering the values for the variables from the console.
    cout << "Enter the limit: ";
    cin >> limit;

    // generating and printing the fibanacci series to the console.
    first = 0;
    second = 1;

    cout << "Fibonacci series: " << first << "\t" << second;

    third = first + second;

    for(count = 2; count < limit; ++count)
    {
        cout << "\t" << third;
        first = second;
        second = third;
        third = first + second;
    }

    // printing the total terms to the console.
    cout << "\nTotal terms: " << count;
}