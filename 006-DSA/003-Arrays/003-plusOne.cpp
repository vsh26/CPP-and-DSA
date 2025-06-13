/*

https://leetcode.com/problems/plus-one/description/

*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    
    for(int i = digits.size() - 1; i >= 0; i--){

        if(digits[i] < 9){
            digits[i] += 1;
            return digits;
        }else{
            digits[i] = 0;
        }
    }

    // If all digits are 9
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){

    int n; cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a); 
    }

    vector<int> ans = plusOne(v);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " "; 
    }

    cout << endl;

    return 0;
}