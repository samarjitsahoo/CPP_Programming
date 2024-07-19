#include <iostream>
using namespace std;

template <class T>
class Vector {
    T *arr;
    int size;
public:
    // Constructor to initialize the vector with a given array and size
    Vector(T* arr, int size) {
        this->size = size;
        this->arr = new T[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
    }

    // Destructor to clean up the allocated memory
    ~Vector() {
        delete[] arr;
    }

    // Method to print the vector
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Additional methods can be added here
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    Vector<int> myVec1(arr1, 5); // Creating a vector of integers
    Vector<float> myVec2(arr2, 5); // Creating a vector of floats

    myVec1.print();
    myVec2.print();

    return 0;
}
