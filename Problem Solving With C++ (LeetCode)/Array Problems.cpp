#include <bits/stdc++.h>
#include <iostream>
using namespace std;



// Problem 1 : 1920. Build Array from Permutation:

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        ans.push_back(nums[nums[i]]);
    return ans;
}

// Problem 2 : 1929. Concatenation of Array : 

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < 2 * n; i++) {
        (i < n) ? ans.push_back(nums[i]) : ans.push_back(nums[i - n]);
    }
    return ans;
}





