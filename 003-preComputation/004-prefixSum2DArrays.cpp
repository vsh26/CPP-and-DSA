/*

Given 2D-Array of N*N integers. Given Q queries and in each query
given a, b, c and d. Print sum of rectangle represented by
(a,b) as top left point
(c,d) as bottom right point

Constraints:
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N

*/

/*

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> ar[i][j];
        }
    }

    int q;
    cin >> q;

    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = 0;
        for(int i=a; i<=c; i++){
            for(int j=b; j<=d; j++){
                sum = sum + ar[i][j];
            }
        }
        cout << sum << endl;
    }

    return 0;
}

Time Complexity: O(N) + O(Q*N*N) = O(N^3)
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
int pf[N][N] = {0};

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> ar[i][j];
            pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }

    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1] << endl;
    }
    return 0;
}