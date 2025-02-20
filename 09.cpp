// C++ program to check whether the given character is in upper-case or in lower-case.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    char character;

    // entering the values for the variables from the console.
    cout << "Enter a character: ";
    cin >> character;

    // check whether the given character is in upper-case or in lower-case and printing the same.
    if(character >= 'A' && character <= 'Z')
        cout << "'" << character << "' is in upper-case.";
    else if(character >= 'a' && character <= 'z')
        cout << "'" << character << "' is in lower-case.";
    else
        cout << "'" << character << "' is not an alphabet.";
}
