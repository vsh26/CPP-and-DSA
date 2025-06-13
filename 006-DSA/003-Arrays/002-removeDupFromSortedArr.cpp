/*

https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

26. Remove Duplicates from Sorted Array

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.

*/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int k = 1;
    vector<int> temp;
    temp.push_back(nums[0]);

    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]){
            continue;
        }else{
            temp.push_back(nums[i]);
            k++;
        }
    }

    nums = temp;

    return k;
        
}

int main(){

    int n; cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a); 
    }

    cout << removeDuplicates(v) << endl;

    return 0;
}