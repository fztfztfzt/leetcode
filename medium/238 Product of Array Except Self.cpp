/*
Product of Array Except Self
Total Accepted: 20624 Total Submissions: 54701 Difficulty: Medium

Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve it without division and in O(n).

For example, given [1,2,3,4], return [24,12,8,6].

Follow up:
Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)
https://leetcode.com/problems/product-of-array-except-self/
*/
 vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        vector<int> v(l,1);
        for(int i=1;i<l;i++)
        v[i]=v[i-1]*nums[i-1];
        int right=1;
        for(int i=l-1;i>=0;i--)
        {
            v[i]*=right;
            right*=nums[i];
        }
        return v;
    }