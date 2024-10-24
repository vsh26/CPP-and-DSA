/*

Prime Number:

    A number which has exactly two factors,
    1 and the number itself

*/

#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
bool isPrime1(int n){

    for(int i = 2; i <= n; i++){

        if((n%i == 0) && (i!=n)){
            return false;
        }
    }

    return true;
}
// Time Complexity: O(N)


// Approach 2: Optimal Approach
bool isPrime2(int n){

    for(int i = 2; i*i <= n; i++){

        if((n%i == 0)){
            return false;
        }
    }

    return true;
}
// Time Complexity: O(sqrt(n))

int main(){

    cout << isPrime1(10) << endl;
    cout << isPrime2(10) << endl;
    cout << isPrime1(37) << endl;
    cout << isPrime2(37) << endl;

    return 0;
}