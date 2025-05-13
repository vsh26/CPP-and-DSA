/*

You are given an array A of integers of size N.
You will be given Q queries where each query is represented by two integers L, R.
You have to find the gcd(Greatest Common Divisor) of the array
after excluding the part from range L to R inclusive (1 Based indexing).
You are guaranteed that after excluding the part of the array remaining array is non empty.

Input:
- First line of input contains an integer T denoting number of test cases.
- For each test case, first line will contain two space separated integers N, Q.
- Next line contains N space separated integers denoting array A.
- For next Q lines, each line will contain a query denoted by two space separated integers L, R.

Output:
- For each query, print a single integer representing the answer of that query.

Constraints

Subtask #1: 40 points
- 2 ≤ T, N ≤ 100, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 10^5
- 1 ≤ L, R ≤ N and L ≤ R

Subtask #2: 60 points
- 2 ≤ T, N ≤ 10^5, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 10^5
- 1 ≤ L, R ≤ N and L ≤ R
- Sum of N over all the test cases will be less than or equal to 10^6.

Warning : Large IO(input output), please use faster method for IO.

Sample Input:
1
3 3
2 6 9
1 1
2 2
2 3

Sample Output:
3
1
2
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int arr[N] , fwd_gcd[N], bkwd_gcd[N];

/* Brute Force
int main(){

    int t; cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        for(int i = 1; i <= n; i++){
            cin >> arr[i];

        }

        while(q--){
            int l, r;
            cin >> l >> r;
            int gc = 0;
            for(int i = 1; i <= l-1; i++){
                gc = __gcd(gc, arr[i]);
            }

            for(int i = r+1; i <= n; i++){
                gc = __gcd(gc, arr[i]);
            }

            cout << gc << endl;
        }
    }

    return 0;
}

Time Complexity:
O(T*N) + O(T*Q*2N) = O(N^3)
*/

// Using Pre-Computation

int main(){

    int t; cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        fwd_gcd[0] = bkwd_gcd[n+1] = 0;

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            fwd_gcd[i] = __gcd(fwd_gcd[i-1], arr[i]);
        }

        for(int i = n; i >= 1; i--){
            bkwd_gcd[i] = __gcd(bkwd_gcd[i+1], arr[i]);
        }

        while(q--){
            int l, r;
            cin >> l >> r;
            cout << __gcd(fwd_gcd[l-1], bkwd_gcd[r+1]) << endl;
        }
    }

    return 0;
}

/*
Time Complexity:
O(T*2N) + O(T*Q) = O(N^2)
*/