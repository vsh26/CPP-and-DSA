#include<iostream>
using namespace std;

// Compile-time Polymorphism/ Static Polymorphism/ Early Binding

// Operator Overloading as a member

/*
    Syntax:

        class ClassName {
            public:
                ReturnType operator<operator_symbol>(const ClassName& obj) {
                    // define how the operator works between *this and obj
                }
        };

*/

class Complex {
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Overload the '+' operator as a member
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;   // uses overloaded '+' operator

    c3.display();  // Output: 6 + 8i
    return 0;
}
