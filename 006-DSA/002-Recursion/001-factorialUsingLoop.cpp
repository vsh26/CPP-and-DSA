/*

Factorial: the product of all positive integers less than or equal to a given integer n

5! = 5 * 4 * 3 * 2 * 1
4! = 4 * 3 * 2 * 1

*/

#include<iostream>
using namespace std;

int fact(int n){

    int f = 1;

    for(int i = n; i >= 1; i--){
        f = f * i;
    }

    return f;

}

int main(){

    cout << fact(5) << endl;

    return 0;
}