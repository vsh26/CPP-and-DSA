/*

https://leetcode.com/problems/fibonacci-number/description/

509. Fibonacci Number

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

*/

#include<iostream>
using namespace std;

int fibo(int n){

    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
}


int main(){
    
    int n;
    cin >> n;

    // 0-based indexing
    cout << n << "th term: " << fibo(n) << endl;

    return 0;
}

// This is not the optimised approach
// Time Complexity: O(2^n)