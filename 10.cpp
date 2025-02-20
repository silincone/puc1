// C++ program to input the number of units of electricity consumed in a house and calculate the 
// final amount using nested-if statement.
/*
    Use the following data for calculation:
    Units Consumed       Cost
     < 30                 (currency) 3.50/unit
     >= 30 and < 50       (currency) 4.25/unit
     >= 50 and < 100      (currency) 5.25/unit
     >= 30                (currency) 5.85/unit

*/
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int units;
    float netAmount;

    // entering the values for the variables from the console.
    cout << "Enter the number of units: ";
    cin >> units;

    // calculating the net amount.
    if(units < 30)
        netAmount = units * 3.50;
    else
    {
        if(units < 50)
            netAmount = (29 * 3.5) + ((units - 29) * 4.25);
        else
        {
            if(units < 100)
                netAmount = (29 * 3.5) + (20 * 4.25) + ((units - 49) * 5.25);
            else
            {
                netAmount = (29 * 3.5) + (20 * 4.25) + (50 * 5.25) + ((units - 99) * 5.85);
            }
        }
    }

    // printing the net amount to the console.
    cout << "The net (total) amount for " << units << " units is: " << netAmount;
}