/*
Length of Last Word
Total Accepted: 66373 Total Submissions: 241729 Difficulty: Easy

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example,
Given s = "Hello World",
return 5. 

https://leetcode.com/problems/length-of-last-word/
*/
4ms
int lengthOfLastWord(string s) {
        int l=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ') l++;
            else if(l!=0) break;
        }
        return l;
    }