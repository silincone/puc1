// C++ program to input principal amount, rate of interest, and time period, and calculate the compound interest
// using while statement.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int time, year;
    float principalAmount, netAmount, rateOfInterest, compoundInterest;

    // entering the values for the variables from the console.
    cout << "Enter the principal amount, rate of interest, and time: ";
    cin >> principalAmount >> rateOfInterest >> time;

    // calculating the compound interest.
    netAmount = principalAmount;
    year = 1;
    while(year <= time)
    {
        netAmount *= 1 + rateOfInterest/100;
        ++year;
    }
    compoundInterest = netAmount - principalAmount;

    // printing the calculated compound interest and net. amount to the console.
    cout << "Compound interest: " << compoundInterest << "\n";
    cout << "Net. amount: " << netAmount;
}