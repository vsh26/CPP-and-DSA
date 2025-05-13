// Reversing a Number

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 23456;

    int rev = 0;

    while(n > 0){
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }

    cout << rev << endl;

    return 0;
}

// Time Complexity: O(log n)