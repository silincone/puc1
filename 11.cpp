// C++ program to input the marks of four subjects. Calculate the total, percentage and print the result as either
// "First class" or "Second class" or "Pass" or "Fail" using switch statement.
/*
    Class               Range (%)
     First class         Between 60% and 100%
     Second class        Between 50% and 59%
     Pass                Between 40% and 49%
     Fail                Less than 40%
*/
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int m1,  m2, m3, m4, totalMarks, choice;
    float percentage;

    // entering the values for the variables from the console.
    cout << "Enter the marks for the four subjects: ";
    cin >> m1 >> m2 >> m3 >> m4;

    // calculating the total marks and the percentage.
    totalMarks = m1 + m2 + m3 + m4;
    percentage = totalMarks / 4.0;
    choice = (int)percentage / 10;

    // printing the total marks and the percentage to the console.
    cout << "Total marks: " << totalMarks << "\n";
    cout << "Percentage: " << percentage << "\n";

    // printing the result.
    cout << "Result: ";
    switch(choice)
    {
    case 10:
    case 9:
    case 8:
    case 7:
    case 6: cout << "First class";
        break;
    case 5: cout << "Second class";
        break;
    case 4: cout << "Pass";
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Fail";
    }
}