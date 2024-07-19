#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Default constructor
    Complex()
    {
        a = 0;
        b = 0;
    }

    // Parameterized constructor with two parameters
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Parameterized constructor with one parameter
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;           // Calls default constructor
    Complex c2(3, 4);     // Calls parameterized constructor with two parameters
    Complex c3(5);        // Calls parameterized constructor with one parameter

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
