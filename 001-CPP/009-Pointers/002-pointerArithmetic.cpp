/*

    Pointer Arithmetic

    1. Increment and Decrement operator
    2. Addition and Subtraction of Constants
    3. Addition and Subtraction of Pointers
    4. Comparision (==, <, <=, >, >==)

*/

#include<iostream>
using namespace std;

int main(){

    // Increment and Decrement operator

    int a = 10;
    int *ptr_a = &a;

    cout << ptr_a << endl;      // 0x61fef8
    ptr_a++;
    cout << ptr_a << endl;      // 0x61fefc
    ++ptr_a;
    cout << ptr_a << endl;      // 0x61ff00

    int b = 10;
    int *ptr_b = &b;

    cout << ptr_b << endl;      // 0x61fef4
    ptr_b--;
    cout << ptr_b << endl;      // 0x61fef0
    --ptr_b;
    cout << ptr_b << endl;      // 0x61feec


    // Addition and Subtraction of Constants

    int c = 10;
    int *ptr_c = &c;

    cout << ptr_c << endl;      // 0x61fef0
    cout << ptr_c + 3 << endl;  // 0x61fef0
    cout << ptr_c - 3 << endl;  // 0x61fee4

    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl;        // 0x61fedc
    cout << arr + 1 << endl;    // 0x61fee0
    cout << arr + 2 << endl;    // 0x61fee4
    cout << arr + 3 << endl;    // 0x61fee8
    cout << arr + 4 << endl;    // 0x61feec
    cout << arr + 5 << endl;    // 0x61fef0


    // Addition and Subtraction of Pointers

    int n1 = 10, n2 = 20;
    int *ptr_n1 = &n1, *ptr_n2 = &n2;

    cout << ptr_n1 << " " << ptr_n2 << endl; // 0x61fed8 0x61fed4

    // cout << ptr_n1 + ptr_n2 << endl;     // Addition of pointers is invalid
    cout << ptr_n1 - ptr_n2 << endl;        // 1


    // Comparision (==, <, <=, >, >=)

    cout << (ptr_n1 == ptr_n2) << endl;     // 0
    cout << (ptr_n1 < ptr_n2) << endl;      // 0
    cout << (ptr_n1 <= ptr_n2) << endl;     // 0
    cout << (ptr_n1 > ptr_n2) << endl;      // 1
    cout << (ptr_n1 >= ptr_n2) << endl;     // 1

    return 0;
}