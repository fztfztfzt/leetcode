/*
Single Number
Total Accepted: 93047 Total Submissions: 201548 Difficulty: Medium

Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 

https://leetcode.com/problems/single-number/
*/
20ms x^x=0;0^x=x;
int singleNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int a = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            a=a^nums[i];//change a^=num[i] time is 20ms
        }
        return a;
}
44ms
int singleNumber(vector<int>& nums) {
	sort(nums.begin(),nums.end());
	int i=1;
	for(;i<nums.size();i+=2)
	{
		if(nums[i]!=nums[i-1]) return nums[i-1];
	}
	return nums[i-1];
}