#include<bits/stdc++.h>
using namespace std;

void printHello(){
    cout << "Hello World" << endl;
}

int sum(int a, int b){
    int result = a + b;
    return result;
}

int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}

int main(){

    printHello();
    cout<< sum(2,3) << endl;

    // Reusability (using functions)
        // You are given five numbers, for each number get the sum of digits of that number

        int t, n;
        cin >> t;
        while(t--){
            cin >> n;
            cout << digitSum(n) << endl;
        }

    return 0;
    //return finishes the execution of function
}