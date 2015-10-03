/*
Longest Common Prefix
Total Accepted: 67273 Total Submissions: 261142 Difficulty: Easy

Write a function to find the longest common prefix string amongst an array of strings. 
https://leetcode.com/problems/longest-common-prefix/
*/
4 ms
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size()==1) return strs[0];
        int j=0,pre=0;
        while(1)
        {
            for(int i=0;i<strs.size()-1;i++)
            {
                if(j<strs[i].length() && j<strs[i+1].length() && strs[i][j]!=strs[i+1][j]) 
                {if(j==0) return "";
                else return strs[i].substr(0,j);
                }
                else if(j>=strs[i].length() || j>=strs[i+1].length()) return strs[i].substr(0,j);
            }
            j++;
        }
        return strs[0];
    }
};