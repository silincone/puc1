// C++ program to find the sum of elements present in all the rows and columns of a matrix separately.
#include <iostream>

#define SIZE 10

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int matrix[SIZE][SIZE], rowCount, columnCount, i, j, rowSum, columnSum;

    // entering the values for the variables from the console.
    cout << "Enter the order of the matrix: ";
    cin >> rowCount >> columnCount;

    cout << "Enter the elements of the matrix:\n";
    for(i = 0; i < rowCount; ++i)
    {
        for(j = 0; j < columnCount; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // calculating the sum of elements present in all the rows and printing the same.
    for(i = 0; i < rowCount; ++i)
    {
        rowSum = 0;
        for(j = 0; j < columnCount; ++j)
        {    
           rowSum += matrix[i][j];
        }

        // printing the calculated sum to the console.
        cout << "Sum of the elements present in Row-" << (i + 1) << " is: " << rowSum << "\n";
    }

    // calculating the sum of elements present in all the columns and printing the same.
    for(i = 0; i < columnCount; ++i)
    {
        columnSum = 0;
        for(j = 0; j < rowCount; ++j)
        {    
           columnSum += matrix[j][i];
        }

        // printing the calculated sum to the console.
        cout << "Sum of the elements present in Column-" << (i + 1) << " is: " << columnSum << "\n";
    }
}