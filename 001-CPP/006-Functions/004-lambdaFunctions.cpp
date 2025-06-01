/*

A lambda function in C++ is a short, unnamed (anonymous) function you can define inline,
especially useful for quick tasks like comparisons, filtering, or callbacks.
They are generally used in frameworks and libraries.

*/

#include <iostream>
using namespace std;

int main() {
    auto greet = [](string name) {
        cout << "Hello " << name << " from lambda!" << endl;
    };
    
    greet("Vishal");  // Output: Hello Vishal from lambda!
}
