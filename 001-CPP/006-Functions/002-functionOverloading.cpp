/*

Function overloading allows you to define multiple functions with the same name but different parameters.
It is a form of compile time polymorphism.

*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(2, 3) << endl;       // Calls int add(int, int)
    cout << add(2.5, 4.5) << endl;   // Calls double add(double, double)
    cout << add(1, 2, 3) << endl;    // Calls int add(int, int, int)
}
