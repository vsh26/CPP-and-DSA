/*

Pass by reference means passing the actual variable (not a copy) to a function.
So, changes made inside the function affect the original variable.

*/

#include <iostream>
using namespace std;

void increment(int &num) {
    num++;  // modifies the original variable
}

int main() {
    int a = 10;
    increment(a);
    cout << a << endl;  // Output: 11
}
