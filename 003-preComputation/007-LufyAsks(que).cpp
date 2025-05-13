/*

Luffy with his crew is on the way to Dressrosa,
where he will be fighting one of the warlords of the sea Doflamingo.
But now he is getting bored and wants do a fun activity.
He is very much obsessed with palindromes.
Given a string S of lower case English alphabet of length N and two Integers L and R,
he wants to know whether all the letters of the substring from index L to R (L and R included)
can be rearranged to form a palindrome or not.
He wants to know this for Q values of L and R and needs your help in finding the answer.
Palindrome is a string of characters which when reversed reads same as the original String.

Constraints:
1 <= t <= 10
1 <= N, Q <= 100000
1 <= L <= R <= N
'a' <= s[i] <= 'z' for 1 <= i <= N

Input:
- First line contains an integer t denoting the number of test cases
- First line of each test case contains 2 space separated integers N and Q, the length of the string and number of queries respectively
- Next line contains the string S
- Each of the Next Q lines contain 2 space separated integers L and R

Output:
- If possible, print "YES", else print "NO"

Sample Input:
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4

Sample Output:
NO
NO
YES
NO
NO
YES
NO
YES
YES
YES

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hsh[N][26];

/*
Brute Force

int main(){

    int t; cin >> t;

    while(t--){
        
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;

        while(q--){
            int l, r;
            cin >> l >> r;

            int hsh[26] = {0};
            l--; r--;

            for(int i = l; i <= r; i++){
                hsh[str[i] - 'a']++;
            }

            int oddCt = 0;
            for(int i = 0; i < n; i++){
                if(hsh[i] % 2 != 0){
                    oddCt++;
                }
            }

            if(oddCt > 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }

        }
    }

    return 0;
}

Time Complexity:
O(T*Q*N) + O(T*Q*N) = O(T*Q*N) = O(10*10^5*10^5)
*/

int main(){

    int t; cin >> t;

    while(t--){
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < 26; j++){
                hsh[i][j] = 0;
            }
        }

        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;


        for(int i = 0; i < n; i++){
            hsh[i+1][str[i] - 'a']++;
        }
        
        //Prefix Sum
        for(int i = 0; i < 26; i++){
            for(int j = 1; j <= n; j++){
                hsh[j][i] += hsh[j-1][i];
            }
        }

        while(q--){
            int l, r;
            cin >> l >> r;

            int oddCt = 0;
            for(int i = 0; i < 26; i++){
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt % 2 != 0){
                    oddCt++;
                }
            }

            if(oddCt > 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }

        }
    }

    return 0;
}

/*

Time Complexity:
O(T*N*26) + O(T*N) + O(T*26*N) + O(T*Q*26) = O(T*N) = O(10*10^5)

*/