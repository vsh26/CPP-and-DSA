#include<bits/stdc++.h>
using namespace std;

void increment(int *m){
    (*m)++;
}

int main(){

    // POINTER --> Data type used to store the adress of variable

    int x = 4;
    int *p_x;
    p_x = &x;

    cout << x << endl;          // 4
    cout << &x << endl;         // 0x61ff04
    cout << p_x << endl;        // 0x61ff04
    cout << *p_x << endl;       // 4
    *p_x = 5;
    cout << x << endl;          // 5
    cout << p_x + 1 << endl;    // 0x61ff08

    int y = 100;
    int *p_y = &y;

    // DOUBLE POINTER --> Pointer used to store the address of pointer

    int **p_p_x = &p_x;

    cout << p_x << endl;            // 0x61ff04
    cout << &p_x << endl;           // 0x61ff00
    cout << p_p_x << endl;          // 0x61ff00
    cout << *p_p_x << endl;         // 0x61ff04
    cout << **p_p_x << endl;        // 5
    cout << x << endl;              // 5
    **p_p_x = 7;
    cout << x << endl;              // 7

    // ARRAYS AND POINTER

    int a[10];
    a[0] = 2;
    a[1] = 4;
    cout << a << endl;              // 0x61fed4
    cout << &a[0] << endl;          // 0x61fed4
    cout << a + 1 << endl;          // 0x61fed8
    cout << &a[1] << endl;          // 0x61fed8

    
    // Passing pointers to function
    int m = 2;
    cout << m << endl;              // 2
    increment(&m);
    cout << m << endl;              // 3

    return 0;
}