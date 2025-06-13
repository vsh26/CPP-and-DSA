/*

Fibonacci Sequence: Each number is sum of previous two numbers

0, 1, 1, 2, 3, 5, 8, 13, 21, ....

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    // 0-based indexing

    for(int i = 2; i <= n; i++){
        int c = a + b;
        a = b;
        b = c;
        
        cout << c << " "; 
    }

}