#include<iostream>
using namespace std;

// Compile-time Polymorphism/ Static Polymorphism/ Early Binding

// Method Overloading

class Adder {
    public:
        // Add two integers
        int add(int a, int b) {
            return a + b;
        }

        // Add two doubles
        double add(double a, double b) {
            return a + b;
        }

        // Add two strings
        string add(string a, string b) {
            return a + b;
        }
};

int main() {

    Adder obj;

    cout << "Int Addition: " << obj.add(5, 10) << endl;                         // 15
    cout << "Double Addition: " << obj.add(3.2, 4.9) << endl;                   // 8.1
    cout << "String Concatenation: " << obj.add("Hello, ", "World!") << endl;   // Hello, World!

    return 0;
}