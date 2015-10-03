/*
Valid Anagram
Total Accepted: 25759 Total Submissions: 72181 Difficulty: Easy

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.
https://leetcode.com/problems/valid-anagram/
*/
1. 84ms
 bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
2.12ms
bool isAnagram(string s, string t) {
        int a[26]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0) return false;
        }
        return true;
    }