// Given an number N. Find all prime numbers from 1 to N.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    for(int i = 2; i*i <= n; i++){

        if((n%i == 0)){
            return false;
        }
    }

    return true;
}

// Approach 1: Brute Force
void findPrime1(int n){

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}
// Time Complexity: O(N * sqrt(n))


// Approach 2: Optimised
void findPrime2(int n){

    // Pre-computation
    int prime[n+1];

    for(int i = 2; i <= n; i++){
        prime[i] = 1;
    }

    for(int i = 2; i <= n; i++){

        if(prime[i] == 1){

            for(int j = i*2; j <= n; j = j+i){
                prime[j] = 0;
            }
        }
    }
    
    for(int i = 2; i <= n; i++){
        if(prime[i] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}


// Approach 3: More Optimised (Sieve of Eratosthenes)
void sieveOfEratosthenes(int n){

    // Pre-computation
    int prime[n+1];

    for(int i = 2; i <=n; i++){
        prime[i] = 1;
    }

    for(int i = 2; i*i <= n; i++){

        if(prime[i] == 1){

            for(int j = i*i; j <= n; j = j+i){
                prime[j] = 0;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(prime[i] == 1){
            cout << i << " ";
        }
    }
    cout << endl;

}
// Time Complexity: O(n*log(log(n)))


int main(){

    int n = 30;
    findPrime1(n);
    findPrime2(n);
    sieveOfEratosthenes(n);

    return 0;
}
