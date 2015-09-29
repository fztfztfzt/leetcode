/*
Remove Duplicates from Sorted Array
Total Accepted: 84266 Total Submissions: 270357 Difficulty: Easy

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

*/
1.超时
int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        for(int j=i+1;j<nums.size();)
        {
            if(nums[i]==nums[j])
            {
                nums.erase(nums.begin()+j);
            }
            else j++;
        }
        return nums.size();
    }
2.60ms
int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();)
        {
            if(nums[i]==nums[i-1]) 
            {
                nums.erase(nums.begin()+i);
            }
            else ++i;
        }
        return nums.size();
    }
3.32ms
int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int pos=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[pos-1]) 
            {
                nums[pos]=nums[i];
                pos++;
                
            }
        }
        return pos;
    }