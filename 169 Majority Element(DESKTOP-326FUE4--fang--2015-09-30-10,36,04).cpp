/*
Majority Element
Total Accepted: 64584 Total Submissions: 176887 Difficulty: Easy

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.
https://leetcode.com/problems/majority-element/
*/
1.40ms
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
2.20ms
int majorityElement(vector<int>& nums) {
        int count=0,current=nums[0];
        for(int i=0;i<nums.size();i++)
		{
			if(nums[i]==current) count++;
			else count--;
			if(count<0)
			{
			    current=nums[i];
			    count=1;
			}
		}
		return current;
    }
3.hashmap