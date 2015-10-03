/*
Summary Ranges
Total Accepted: 22002 Total Submissions: 111801 Difficulty: Easy

Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"]. 
https://leetcode.com/problems/summary-ranges/
*/
0ms 注意构成字符串的2种方式
vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.empty()) return v;
        int s=0;
        int i=1;
        for(;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]+1)
            {
               if(i-s>1) v.push_back(to_string(nums[s])+"->"+to_string(nums[i-1]));
               else if(i-s==1) v.push_back(to_string(nums[s]));
               s=i;
            }
        }
        if(i-s>1) v.push_back(to_string(nums[s])+"->"+to_string(nums[i-1]));
        else if(i-s==1) v.push_back(to_string(nums[s]));
        return v;
    }