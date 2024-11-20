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

// Problem 3 : 1480. Running Sum of 1d Array

vector<int> runningSum(vector<int>& nums) {
    vector<int> result;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j <= i; j++)
        {
            sum += nums[j];
        }
        result.push_back(sum);
        sum = 0;
    }
    return result;
}

//----- Other Optimized Solution : ------
vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}





