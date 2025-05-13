// Extracting digits of a given number

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n = 23456;

    while(n > 0){
        int lastDigit = n % 10;
        cout << lastDigit << " ";
        n = n / 10;
    }

    // 6 5 4 3 2
    return 0;
}

// Time Complexity: O(log n)