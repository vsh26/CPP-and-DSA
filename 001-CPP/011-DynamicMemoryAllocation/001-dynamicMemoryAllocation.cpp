#include<iostream>
using namespace std;

int* func1(){

    // The new keyword is used to dynamically allocate memory on the heap at runtime.

    int *ptr = new int;
    *ptr = 20;

    return ptr;
}

void func2(){

    int *ptr = new int;
    *ptr = 50;

    cout << *ptr << endl;   // 50

    delete ptr;
    // we have to explicitly free the heap memory

}

void func3(){

    int size;
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return;
    }


    int *arr = new int[size];

    int x = 1;
    for(int i = 0; i < size; i++){
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;

    delete [] arr;
    // we have to explicitly free the heap memory
}

int main(){

    int* a = func1();       // we require a pointer variable to store return value
                            // as the function returns a pointer

    cout << *a << endl;     // 20
    delete a;               // cleanup to avoid memory leak

    func2();

    func3();

    return 0;
}