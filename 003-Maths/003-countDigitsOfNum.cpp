// Count digits in the given number

#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
int count1(int n){

    int ct = 0;

    while(n > 0){
        ct++;
        n = n / 10;
    }

    return ct;

}
// Time Complexity: O(log n)


// Approach 2: Optimal Approach
int count2(int n){

    int ct = (log10(n)) + 1;

    return ct;
}
// Time Complexity: O(1)


int main(){

    int n = 23456;
    cout << count1(n) << endl;
    cout << count2(n) << endl;
    
    return 0;
}