#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int arr1[N];
int arr2[N][N];

int increment(int n){
    n++;
    return n;
}

void inc1 (int a){
    a++;
}

void inc2(int &a, int b){
    a++;
    b++;
}

void emptyString1(string str){
    str = "";
}

void emptyString2(string &str){
    str = "";
}

// Arrays are always passed by reference, we do not have to use &
// For 1-D Array we do not have to write size
void func1(int m[]){
    m[0] = 0;
}

// For 2-D arrays
    // We can skip the row size, but not the column size
void func2(int n[][3]){
    n[0][0] = 0;
}

// We generally avoid passing arrays in functions in CP
// If you have to declare an array in CP, declare it GLOBALLY, according to the range given

int main(){

    //References

    int num = 10;

    num = increment (num);
    cout << num << endl;                // 11

    int a = 10, b = 20;
    
    inc1(a);
    cout << a << endl;                  // 10

    inc2(a, b);
    cout << a << " " << b << endl;      // 11 20

    string str = "ABCD";
    emptyString1(str);
    cout << str << endl;                // ABCD

    emptyString2(str);
    cout << str << endl;                // 

    // Arrays are always by default passed by reference

    int m[5] = {1, 2, 3, 4, 5};
    cout << m[0] << endl;               // 1
    func1(m);
    cout << m[0] << endl;               // 0

    int n[2][3] = {{1,2,3}, {4,5,6}};
    cout << n[0][0] << endl;            // 1
    func2(n);
    cout << n[0][0] << endl;            // 0


    return 0;
}