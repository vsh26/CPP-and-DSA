/*

Given array a of N integers. Given Q queries and each query given L and R.
Print sum of array elements from index L to R (L, R included)

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N

*/


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    
    // For l,r questions or prefix-sum questions
    // Use 1 base array instead of zero base array for better calculations

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;

        long long int sum = 0;
        for(int i=l; i<=r; i++){
            sum = sum + a[i];
        }
        cout << sum << endl;
    }
    return 0;
}

Time Complexity: O(N) + O(Q*N) = O(N) + O(N*N) = O(N^2)

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N] = {0};

int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }

    int q;
    cin >> q;

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l-1] << endl;
    }
    return 0;
}

/*
Time Complexity: O(N) + O(Q) = O(N)
*/