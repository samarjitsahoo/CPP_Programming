#include <iostream>
using namespace std;

class A {
public:
    void say() {
        cout << "Hello world" << endl;
    }
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.say(); // Call the method from class A

    return 0;
}
