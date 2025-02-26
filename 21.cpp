// C++ program to find the position of a given number in an array.
#include <iostream>

#define SIZE 100

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a[SIZE], i, element, number, position = -1;

    // entering the values for the variables from the console.
    cout << "Enter the number of elements: ";
    cin >> number;

    cout << "Enter the elements: ";
    for(i = 0; i < number; ++i)
    {
        cin >> a[i];
    }

    cout << "Enter the search element: ";
    cin >> element;

    // finding the position of the given number in the given array.
    for(i = 0; i < number; ++i)
    {
        if(a[i] == element)
        {
            position = i;
            break;
        }
    }

    // printing the result of the finding to the console.
    if(position >= 0)
        cout << element << " is present at the position: " << (position + 1);
    else
        cout << element << " is not present is the given array.";
}