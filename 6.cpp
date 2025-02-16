// C++ program to find the largest, smallest, and the second among three numbers.
#include <iostream>

using std::cin, std::cout;

int main()
{
    // declaring the required variables.
    int a, b, c, largest, secondLargest, smallest;

    // entering the values for the variables from the console.
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // finding the largest, smallest, and the second.
    largest = a;
    if(b > largest)
        largest = b;
    if(c > largest)
        largest = c;

    smallest = a;
    if(b < smallest)
        smallest = b;
    if(c < smallest)
        smallest = c;

    secondLargest = (a + b + c) - (largest + smallest);

    // printing the largest, smallest, and the second.
    cout << "Smallest: " << smallest << "\n";
    cout << "Second largest: " << secondLargest << "\n";
    cout << "Largest: " << largest;
}