// C++ program to find the largest and the second largest of 'n' numbers.
#include <iostream>

#define SIZE 100

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a[SIZE], i, number, largest, secondLargest;

    // entering the values for the variables from the console.
    cout << "Enter the number of elements: ";
    cin >> number;

    cout << "Enter the elements: ";
    for(i = 0; i < number; ++i)
    {
        cin >> a[i];
    }

    // finding the second largest number.
    if(a[0] > a[1])
    {
        largest = a[0];
        secondLargest = a[1];
    }
    else
    {
        largest = a[1];
        secondLargest = a[0];
    }

    for(i = 2; i < number; ++i)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
    }

    // printing the largest and the second largest of 'n' numbers to the console.
    cout << "Largest: " << largest << "\n";
    cout << "Second largest: " << secondLargest;
}