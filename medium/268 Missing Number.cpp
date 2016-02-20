/*Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

Credits:
Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.*/
https://leetcode.com/problems/missing-number/
runtime 68ms
int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]) return i;
        }
        return nums.size();
    }
Runtime: 36 ms
int missingNumber(vector<int>& nums) {
        vector<int> v(nums.size()+1,-1);
        for(auto i : nums){
            v[i]=i;
        }
        for(int i=0;i<v.size();i++)
        {
            if(i!=v[i]) return i;
        }
        
    }
Runtime: 36 ms ; O(1) space spend
int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum = (n*(n+1))*0.5;
        for(auto i :nums)
        {
            sum-=i;
        }
        return sum;
    }
BEST answer:
int missingNumber(vector<int>& nums) {
        int sum=nums.size();
        int i=0;
        for(auto j : nums){
            sum^=j;
            sum^=i;
            ++i;
        }
        return sum;
    }