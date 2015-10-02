/*
Isomorphic Strings
Total Accepted: 29763 Total Submissions: 117402 Difficulty: Easy

Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

Note:
You may assume both s and t have the same length.
https://leetcode.com/problems/isomorphic-strings/
*/
8ms
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int ls=s.length(),lt = t.length(),sa[256]={-1},sb[256]={-1};
        return sa[2];
        if(ls==lt)
        {
            for(int i=0;i<ls;i++)
            {
                if(sa[s[i]]==sb[t[i]])
                {
                    sa[s[i]]=i;
                    sb[t[i]]=i;
                }
                else return false;
            }
        }
        else return false;
        return true;
    }
};