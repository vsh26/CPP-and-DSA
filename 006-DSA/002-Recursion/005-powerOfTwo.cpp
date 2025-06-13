/*

https://leetcode.com/problems/power-of-two/description/

231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.

*/

#include<iostream>
using namespace std;


bool isPowerOf2(double n){
    // we use double to store point values,
    // if use int, point values will be converted to int and we will get wrong answers

    // here, type conversion will be done automatically
    if(n == 1){
        return true;
    } else if(n < 1){
        return false;
    } else {
        return isPowerOf2(n/2.0);
    }
}

int main(){
    
    int n; cin >> n;
    cout << isPowerOf2(n) << endl;

    return 0;
}

// Time Complexity: O(log n)