/*

- Pointers
    -> A special variable that stores the address of another variable

- Dereference Operator (*) ->
    -> gets the value of variable pointed by any pointer
    -> lets us directly access and modify the value of variable

- NULL Pointer
    -> We assign NULL value to a pointer to show that it doesn't point to any location
    -> Dereferencing NULL pointer is not possible
        -> It will result in error (SEGMENTATAION FAULT)

- & can be used as:
    -> Address of Operator
    -> To create a Reference Variable

- Reference Variable
    -> Alternate name (alias) of already existing value

*/

#include<bits/stdc++.h>
using namespace std;

void increment(int *m){
    (*m)++;
}

int *fun(){
    int x = 5;
    return &x;
}

int main(){

    // declaring pointer
    
    // 1st way
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


    // 2nd way
    int a = 5;
    int *ptr_a = &a;
    int **ptr_ptr_a = &ptr_a; // Double Pointer

    cout << a           << endl;        //5
    cout << &a          << endl;        //0x61ff04
    cout << ptr_a       << endl;        //0x61ff04
    cout << *ptr_a      << endl;        //5
    cout << &ptr_a      << endl;        //0x61ff00
    cout << ptr_ptr_a   << endl;        //0x61ff00
    cout << *ptr_ptr_a  << endl;        //0x61ff04
    cout << **ptr_ptr_a << endl;        //5

    cout << sizeof(ptr_a) << endl;      //4

    // ARRAYS AND POINTER

    int arr[10];
    arr[0] = 2;
    arr[1] = 4;
    cout << arr << endl;              // 0x61fed4
    cout << &arr[0] << endl;          // 0x61fed4
    cout << arr + 1 << endl;          // 0x61fed8
    cout << &arr[1] << endl;          // 0x61fed8

    
    // Passing pointers to function
    int m = 2;
    cout << m << endl;              // 2
    increment(&m);
    cout << m << endl;              // 3

    //Exa: Undefined behaviour of Dangling Pointers
    int *p = fun();
    cout << p << endl;

    return 0;
}