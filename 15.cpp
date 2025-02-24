// C++ program to check whether a given number is an Armstrong number or not using do-while statement.
// Armstrong number example: 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int number, tempVariable, remainder, sum;

    // entering the values for the variables from the console.
    cout << "Enter a number: ";
    cin >> number;

    // checking whether the given number is an Armstrong number or not.
    tempVariable = number;
    sum = 0;
    do
    {
        remainder = tempVariable % 10;
        sum += remainder * remainder * remainder;
        tempVariable /=10;
    } while (tempVariable != 0);
    

    // printing the result obtained to the console.
    if(sum == number)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";
}