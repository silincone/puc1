// C++ program to convert days into years, months, and days assuming all months have 30 days.
#include <iostream>

#define DAYS_IN_AN_YEAR 365
#define DAYS_IN_A_MONTH 30

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int totalDays, days, months, years;

    // entering the values for the variables from the console.
    cout << "Enter the total days: ";
    cin >> totalDays;

    // converting number of days to years ; months ; days.
    years = totalDays / DAYS_IN_AN_YEAR;
    totalDays %= DAYS_IN_AN_YEAR;

    months = totalDays / DAYS_IN_A_MONTH;

    days = totalDays % DAYS_IN_A_MONTH;

    // printing the converted number of days.
    cout << "Days: " << days << "\n";
    cout << "Months: " << months << "\n";
    cout << "Years: " << years;
}