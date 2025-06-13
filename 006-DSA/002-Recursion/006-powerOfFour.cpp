/*

https://leetcode.com/problems/power-of-four/description/

342. Power of Four

Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4^x.

*/

#include<iostream>
using namespace std;


bool isPowerOf4(double n){

    if(n == 1){
        return true;
    } else if(n < 1){
        return false;
    } else {
        return isPowerOf4(n/4);
    }
}

int main(){
    
    int n; cin >> n;
    cout << isPowerOf4(n) << endl;

    return 0;
}

// Time complexity: O(log n)