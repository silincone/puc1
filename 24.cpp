// C++ program to find the sum of two compatible matrices.
#include <iostream>

#define SIZE 10

using std::cin, std::cout, std::cerr;

int main()
{
    // declaring the required variables.
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], matrixSum[SIZE][SIZE], i, j, rowCount1, columnCount1, rowCount2, columnCount2;

    // entering the values for the variables from the console.
    cout << "Enter the order of the first matrix: ";
    cin >> rowCount1 >> columnCount1;

    cout << "Enter the order of the second matrix: ";
    cin >> rowCount2 >> columnCount2;

    //checking whether the two given matices are compatible or not. If not, then terminate the program.
    if(!((rowCount1 == rowCount2) && (columnCount1 == columnCount2)))
    {
        cerr << "ERROR! Order of given two matrix do not match.\n";
        cout << "Explanation: To add two matrices, the order of the matrices must be the same.";
        return 1;
    }

    // entering the values for the two matrices.
    cout << "Enter the elements of the first matrix:\n";
    for(i = 0; i < rowCount1; ++i)
    {
        for(j = 0; j < columnCount1; ++j)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for(i = 0; i < rowCount2; ++i)
    {
        for(j = 0; j < columnCount2; ++j)
        {
            cin >> matrix2[i][j];
        }
    }

    // carrying out matrix addition and printing the result.

    for(i = 0; i < rowCount1; ++i)
    {
        for(j = 0; j < columnCount1; ++j)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // printing the sum matrix to the console.
    cout << "The resultant matrix is:\n";
    for(i = 0; i < rowCount1; ++i)
    {
        for(j = 0; j < columnCount1; ++j)
        {
            cout << matrixSum[i][j] << "\t";
        }
        cout << "\n";
    }
}