#include<iostream>
using namespace std;

// Compile-time Polymorphism/ Static Polymorphism/ Early Binding

// Operator Overloading using friend function

class Box {
    int length;

public:
    // Constructor
    Box(int l = 0){
        length = l;
    }

    // Friend function declaration
    friend Box operator+(const Box& a, const Box& b);

    // Display function
    void showLength() const {
        cout << "Length: " << length << endl;
    }
};

// Friend function definition
Box operator+(const Box& a, const Box& b) {
    // Accessing private members directly
    return Box(a.length + b.length);
}

int main() {
    Box box1(10);
    Box box2(20);

    Box box3 = box1 + box2;     // Calls overloaded operator '+'

    cout << "Box1 + Box2 = ";
    box3.showLength();          // 30

    return 0;
}
