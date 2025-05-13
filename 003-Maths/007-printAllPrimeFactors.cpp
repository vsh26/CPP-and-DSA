/*

N = 60

Factors: 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60
Prime Factors: 2, 3, 5

*/

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
void primeDivisors1(int n){

    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            if(isPrime(i)){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}
// Time Complexity: O(n * sqrt(n))


// Approach 2: Slightly Optimised
void primeDivisors2(int n){

    for(int i = 2; i*i <= n; i++){

        if(n%i == 0){
            if(isPrime(i)){
                cout << i << " ";
            }

            if((n%i) != i){
                if(isPrime(n/i)){
                    cout << (n/i) << " ";
                }
            }
        }
    }
    cout << endl;
}
// Time Complexity: O(N * 2 * sqrt(n))
/*
Exact complexity cannot be determined,
(i.e., we cannot directly multiply the values)
because primec heck is only being done for factors
*/


//Approach 3: More Optimised
void primeDivisors3(int n){

    for(int i = 2; i <= n; i++){
        if((n%i) == 0){

            if(isPrime(i)){
                cout << i << " ";
            }

            while((n%i) == 0){
                n = n/i;
            }
        }
    }
    cout << endl;
}
// Time Complexity: O(N)


// Approach 4: More Optimised
void primeDivisors4(int n){

    for(int i = 2; i*i <= n; i++){
        if((n%i) == 0){

            if(isPrime(i)){
                cout << i << " ";
            }

            while((n%i) == 0){
                n = n/i;
            }
        }
    }

    if(n != 1){
        cout << n << " ";
    }
    cout << endl;
}
// Time Complexity: O(sqrt(n))

int main(){

    int n = 60;

    primeDivisors1(n);  // 2 3 5
    primeDivisors2(n);  // 2 3 5
    primeDivisors3(n);  // 2 3 5
    primeDivisors4(n);  // 2 3 5

    return 0;
}