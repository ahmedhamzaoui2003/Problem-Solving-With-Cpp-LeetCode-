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


// Problem 4 : 1672. Richest Customer Wealth : 

int maximumWealth(vector<vector<int>>& accounts) {
    int max = 0;
    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }
        if (sum > max) max = sum;
    }
    return  max;
}

// ------ Other method (using accumulate(v.begin() ,v.end(),0) => to find the sum of a vector ) -----

int maximumWealth(vector<vector<int>>& acc) {
    int max = 0;
    int sum = 0;
    for (int i = 0; i < acc.size(); i++) {
        sum = accumulate(acc[i].begin(), acc[i].end(), 0);
        if (sum > max) max = sum;
    }
    return  max;
}

// Problem 5 : 1470. Shuffle the Array :  

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> vX(nums.begin(), nums.begin() + n);
    vector<int> vY(nums.begin() + n, nums.end());

    int counterX = 0, counterY = 0;

    vector<int> result;
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) result.push_back(vX[counterX++]);
        else result.push_back(vY[counterY++]);
    }
    return result;

}

// ------other method using a simple solution 0(n/2)---------------
vector<int> shuffle(vector<int>& nums, int n) {
   
    vector<int> result;
    for (int i = 0; i <n; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[i + n]);
    }
    return result;

}

// Problem 6 : 1431. Kids With the Greatest Number of Candies

// my bad solution :
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;

    for (int i = 0; i < candies.size(); i++) {
        candies[i] += extraCandies;
        int max = *max_element(candies.begin(), candies.end());
        (max == candies[i]) ? result.push_back(true) : result.push_back(false);
        candies[i] -= extraCandies;
    }
    return result;
}

// --------------Other Optimized Solution ----------------------


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    double most = *max_element(candies.begin(), candies.end());
    vector<bool> a;
    for (int c : candies) a.push_back(c + extraCandies >= most);
    return a;
}


// Problem 7 : 1512. Number of Good Pairs

int numIdenticalPairs(vector<int>& nums) {
    int goodPairs = 0;
    for (int i = 0; i < nums.size(); i++) {
        goodPairs += count(nums.begin() + i + 1, nums.end(), nums[i]);
    }
    return goodPairs;
}































