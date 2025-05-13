// GCD/ HCF

// Note: LCM(a, b) * HCF(a, b) = a * b
//      => LCM(a, b) = (a * b)/ HCF(a, b)

#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
int gcd1(int n1, int n2){

    int min_n = min(n1, n2);
    int gcd;
    
    for(int i = 1; i <= min_n; i++){

        if((n1%i == 0) && (n2%i == 0)){
            gcd = i;
        }
    }
    return gcd;
}
// Time Complexity: O(min(n1, n2))


// Approach 2: Euclidean Algorithm
// gcd(n1, n2) = gcd(n1-n2, n2); where n1 > n2
// which can further be optimised as
// gcd(n1, n2) = gcd(n1%n2, n2); where n1 > n2

int gcd2(int n1, int n2){

    while((n1>0) && (n2>0)){

        if(n1>n2){
            n1 = n1 % n2;
        }else{
            n2 = n2 % n1;
        }
    }

    if(n1 == 0){
        return n2;
    }else{
        return n1;
    }
}
// Time Complexity: O(log(min(n1, n2)))
// Base of log will be "phi"

int main(){

    cout << gcd1(52, 10) << endl;
    cout << gcd2(52, 10) << endl;

    return 0;
}