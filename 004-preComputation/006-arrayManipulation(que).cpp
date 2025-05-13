/*

https://www.hackerrank.com/challenges/crush/problem

Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.


Input Format:
- The first line contains two space-separated integers n and m,
the size of the array and the number of operations, respectively.
- Each of the next m lines contains three space-separated integers a, b and k,
the left index, right index and summand.

Constraints:
3 <= n <= 10^7
1 <= m <= 2*10^5
1 <= a <= b <= n
0 <= k <= 10^9
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1;
long long int arr[N];

/*

Brute Force:

int main(){

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int a, b, k;
        cin >> a >> b >> k;

        for(int i = a; i <= b; i++){
            arr[i] += k;
        }
    }

    long long mx = INT_MIN;
    for(int i = 1; i <= n; i++){
        mx = max(mx, arr[i]);
    }

    return 0;
}

Time Complexity:
O(M*N) + O(N) = O(M*N) = o(10^12)
*/

// Using Pre-Computation

int main(){

    int n, m;
    cin >> n >> m;

    while(m--){
        int a, b, k;
        cin >> a >> b >> k;

        arr[a] = arr[a] + k;
        arr[b+1] = arr[b+1] - k;
    }

    // Prefix Sum
    for(int i = 1; i <= n; i++){
        arr[i] = arr[i] + arr[i-1];
    }

    long long mx = INT_MIN;
    for(int i = 1; i <= n; i++){
        mx = max(mx, arr[i]);
    }
    
    cout << mx << endl;

    return 0;
}

/*
Time Complexity:
O(M) + O(N) = O(M*N) = o(10^7)
*/