/*
Contains Duplicate
Total Accepted: 38123 Total Submissions: 102262 Difficulty: Easy

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct. 
https://leetcode.com/problems/contains-duplicate/
*/
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
                if(nums[i]==nums[i-1]) return true;

        }
        return false;
    }