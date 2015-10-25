/*
Single Number III
Total Accepted: 12907 Total Submissions: 33154 Difficulty: Medium

Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:

    The order of the result is not important. So in the above example, [5, 3] is also correct.
    Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
https://leetcode.com/problems/single-number-iii/
*/
20ms
vector<int> singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result^=nums[i];
        }
        result&=-result;
        vector<int> v(2,0);
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&result)==0) v[0]^=nums[i];
            else v[1]^=nums[i];
        }
        return v;
    }