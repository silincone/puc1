// C++ program to find the sum and average of 'n' numbers.
#include <iostream>

#define SIZE 100

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a[SIZE], i, number, sum = 0;
    float average;

    // entering the values for the variables from the console.
    cout << "Enter the number of elements: ";
    cin >> number;

    cout << "Enter the elemets: ";
    for(i = 0; i < number; ++i)
    {
        cin >> a[i];
    }

    // calculating the sum and avarage of 'n' numbers. 
    for(i = 0; i < number; ++i)
    {
        sum += a[i];
    }

    average = (float)sum / number;

    // printing the calculated sum and average of 'n' numbers to the console.
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average;
}