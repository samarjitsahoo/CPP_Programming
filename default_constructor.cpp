#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor declaration
    Complex(void);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // Default constructor definition
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
