/*
Remove Element
Total Accepted: 76957 Total Submissions: 241213 Difficulty: Easy

Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length. 

https://leetcode.com/problems/remove-element/

*/

4ms
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();)
        {
            if(nums[i]==val)
            nums.erase(nums.begin()+i);
            else i++;
        }
        return nums.size();
    }
};