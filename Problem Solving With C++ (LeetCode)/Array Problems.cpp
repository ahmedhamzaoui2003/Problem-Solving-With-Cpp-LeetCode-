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







