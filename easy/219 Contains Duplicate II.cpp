/*
Contains Duplicate II
Total Accepted: 27991 Total Submissions: 105416 Difficulty: Easy

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k. 
https://leetcode.com/problems/contains-duplicate-ii/
*/
python 56ms
class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        M={}
        for i in range(len(nums)):
            if nums[i] not in M:
                M[nums[i]]=i
            else :
                if i - M[nums[i]]<=k:
                    return True
                else :
                    M[nums[i]]=i
        return False
C++ 76ms
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int ,int> m;
        for (int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end()) m[nums[i]]=i;
            else
            {
                if(i-m[nums[i]]<=k) return true;
                else m[nums[i]]=i;
            }
        }
        //if(flag==1) return true;
        return false;
    }
};