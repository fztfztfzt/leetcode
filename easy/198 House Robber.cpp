/*
House Robber
Total Accepted: 34075 Total Submissions: 112671 Difficulty: Easy

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

Credits:
Special thanks to @ifanchu for adding this problem and creating all test cases. Also thanks to @ts for adding additional test cases.

https://leetcode.com/problems/house-robber/
*/
0ms
int rob(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            v[i]=nums[i];
            for(int j=0;j<i-1;j++)
            {
                if(v[j]+nums[i]>v[i]) v[i]=v[j]+nums[i];
            }
            if(v[i]>max) max=v[i];
        }
        return max;
    }