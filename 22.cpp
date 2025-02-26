// C++ program to check whether the given matrix is scalar or not.
#include <iostream>

#define SIZE 10

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    bool  scalar;
    int a[SIZE][SIZE], rowCount, columnCount, i, j, scalarElement;

    // entering the values for the variables from the console.
    cout << "Enter the order of the matrix: ";
    cin >> rowCount >> columnCount;

    cout << "Enter the elements of the matrix:\n";
    for(i = 0; i < rowCount; ++i)
    {
        for(j = 0; j < columnCount; ++j)
        {
            cin >> a[i][j];
        }
    }

    // checking whether the given matrix is scalar or not and print the same.
    if(rowCount == columnCount)
    {
        cout << "Given matrix is a square matrix ";
        scalar = 1;
        scalarElement = a[0][0];
        for(i = 0; i < rowCount; ++i)
        {
            for(j = 0; j < columnCount; ++j)
            {
                if(i == j)
                {
                    if(a[i][j] != scalarElement)
                    {
                        scalar = 0;
                        break;
                    }
                }
                else
                {
                    if(a[i][j] != 0)
                    {
                        scalar = 0;
                        break;
                    }
                }
            }
        }
        if(scalar)
            cout << "and it is also a scalar matrix.";
        else
            cout << "and it is not a scalar matrix.";
    }
    else
        cout << "The given matrix is not a square matrix.";
}