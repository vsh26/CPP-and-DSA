/*

PASS BY VALUE
    -> When parameter is a copy of actual argument variable in memory

PASS BY REFERENCE
    -> When we pass the reference of the argument to the function
    -> Pass by reference means passing the address of actual variable (not a copy of the variable)
        to a function. So, changes made inside the function affect the original variable.
    1. Using Pointers
    2. Using Reference Variables

*/

#include<iostream>
using namespace std;

// Pass By Value
void changeA(int temp){
    temp = 20;
    cout << "Value of temp: " << temp << endl;          //20
}

// Pass by Reference (Using Pointers)
void changeB(int *ptr_b){
    *ptr_b = 20;
    cout << "Value of ptr_b: " << *ptr_b << endl;       //20
}

// Pass by Reference (Using Reference Variables)

void changeC(int &alias_c){
    alias_c = 20;
    cout << "Value of alias_c: " << alias_c << endl;    //20
}

int main(){

    int a = 10;
    cout << "Initial value of a: "<< a << endl;         //10
    changeA(a);
    cout << "Current value of a: " << a << endl;        //10
    //Value of a is not modified

    int b = 10;
    cout << "Initial value of b: " << b << endl;        //10
    changeB(&b);
    cout << "Current value of b: " << b << endl;        //20
    //Value of b is modified

    int c = 10;
    cout << "Initial value of c: " << c << endl;        //10
    changeC(c);

    // You don’t need to pass &c in the function call.
    // Because the & in the function definition already say's, "I’m expecting a reference."
    // When you do changeC(c), the compiler automatically passes a reference
    // (i.e. the address behind the scenes), not a copy.
    
    cout << "Current value of c: " << c << endl;        //20
    //Value of c is modified

    return 0;
}