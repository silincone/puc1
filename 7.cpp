// C++ program to input total amount in a bill, if the amount is greater than 1000, a discount of 8% is given.
// Otherwise, no output is given. Print the total amount, discount, and the final amount. (Using if-statement)
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    float amount, netAmount, netDiscount, discount = 0.0;

    // entering the values for the variables from the console.
    cout << "Enter the total purchase amount: ";
    cin >> amount;

    // calculating the discount if required.
    if(amount >= 1000)
        discount = (float)8 / 100;

    netDiscount = amount * discount;
    netAmount = amount - netDiscount;

    // printing the total amount, discount, and the final amount.
    cout << "Total amount: " << amount << "\n";
    cout << "Net discount: " << netDiscount << "\n";
    cout << "Final amount: " << netAmount;
}