/*

    Formulae:

    1. (a + b) % M = ((a % M) + (b % M)) % M
    2. (a * b) % M = ((a % M) * (b % M)) % M
    3. (a - b) % M = ((a % M) - (b % M) + M) % M
    4. (a / b) % M = ((a % M) * (b^-1 % M)) % M
        (b^-1 is modulo multiplicative inverse of b)

    MMI (Modulo Multiplicative Inverse)
        If M = 7,     the MMI of 4 is 2 as (4 * 2) %7 == 1,
        If M = 11,    the MMI of 7 is 8 as (7 * 8) % 11 == 1,
        If M = 13,    the MMI of 7 is 2 as (7 * 2) % 13 == 1

        NOTE:   MMI of a number may be different for different M
                
                So, if we are performing modulo arithmetic in our program and we need the result of the operation x / y, we should NOT perform

                z = (x/y) % M;

                instead, we should perform

                y_inv = findMMI(y, M);
                z = (x * y_inv) % M;

                Methods to Find MMI:
                1. Extended Euclidean Algorithm
                2. Fermat’s Little Theorem 

*/

/*
    Exa:
        Program to print factorial of number N
        1 <= N <= 100
        Print answer modulo M, where M = 47
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int fact = 1;
    int M = 47;

    for(int i = 2; i <= n; i++){
        fact = (fact * i) % M;
    }

    cout << fact << endl;

    return 0;
}

/*
    19! -> can be stored in long long int
    20! -> can be stored in long long int
    21! -> OVERFLOW
*/

/*
    -> Taking mod prevents INTEGER OVERFLOWS
    
    -> Criteria for mod value M:

        -> It should just be large enough to fit in the largest integer data type, i.e., it makes sure that there is no overflow in the result.

        -> It should be a prime number because if we take mod of a number by prime the result is generally spaced, i.e., the results are very different results in comparison to mod the number by non-prime, that is why primes are generally used for mod.

    -> Why 10^9 + 7 is used in most of the problems?

        -> It is the first 10-digit prime number and fits in int data type as well. In fact, any prime number less than 2^30 will be fine in order to prevent possible overflows.

*/