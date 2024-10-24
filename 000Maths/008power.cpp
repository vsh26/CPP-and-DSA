#include<bits/stdc++.h>
using namespace std;

// Approach 1: Brute Force
void power1(int x, int n){

    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ans * x;
    }

    cout << ans << endl;

}
// Time Complexity: O(n)

// Approach 2: Power Exponentiation
void power2(int x, int n){

    int m = n;
    int ans = 1;

    if(n < 0){
        n = n * -1;
    }
    
    while(n > 0){

        // if n is odd
        if(n%2 != 0){
            ans = ans * x;
            n = n - 1;
        }else{
            n = n/2;
            x = x*x;
        }
    }

    if(m < 0){
        ans = 1/ans;
    }

    cout << ans << endl;
}
// Time Complexity: O(log(n))

int main(){

    power1(2, 5);
    power2(2, 5);

    return 0;
}