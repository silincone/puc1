// C++ program to arrange a list of numbers in ascending order. (Bubble sort)
#include <iostream>

#define SIZE 100

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a[SIZE], i, j, number;

    // entering the values for the variables from the console.
    cout << "Enter the number of elements: ";
    cin >> number;

    cout << "Enter the elements: ";
    for(i = 0; i < number; ++i)
    {
        cin >> a[i];
    }

    // sorting the list of numbers in ascending order.
    for(i = 0; i < (number - 1); ++i) 
    {
        for(j = 0; j < (number - i - 1); ++j)
        {
            if(a[j] > a[j + 1])
            {
                // interchanging the values of a[j] and a[j + 1].
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }

    // printing the arranged list of numbers in ascending order to the console.
    cout << "The arranged list of number in ascending order is:";
    for(i = 0; i < number; ++i)
    {
        cout << "\t" << a[i];
    }
}
