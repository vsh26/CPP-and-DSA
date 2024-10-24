// Print all divisors of a given number

#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
void printAllDivisors1(int n){

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
    cout << endl;

}
// Time Complexity: O(N)


// Approach 2: Optimal Approach
void printAllDivisors2(int n){

    for(int i = 1; i*i <= n; i++){

        if(n%i == 0){
            cout << i << " ";

            if((n/i) != i){
                cout << (n/i) << " ";
            }
        }
    }
    cout << endl;

}
// Time Complexity: O(sqrt(n))

int main(){
    
    int n = 36;
    printAllDivisors1(n);
    printAllDivisors2(n);

    return 0;
}