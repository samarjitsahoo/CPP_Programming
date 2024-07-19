#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) // Parameterized constructor definition
{
    a = x;
    b = y;
}

int main()
{
    Complex c(3, 4); // Creating an object with the parameterized constructor
    c.printNumber(); // Displaying the values
    return 0;
}
