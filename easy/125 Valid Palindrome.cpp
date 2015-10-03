/*
Valid Palindrome
Total Accepted: 70452 Total Submissions: 317527 Difficulty: Easy

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome. ''
https://leetcode.com/problems/valid-palindrome/
*/
12ms
bool isa(char s)
    {
        if((s>='A' && s<='Z')||(s>='a' && s<='z')||(s>='0'&&s<='9'))
        return true;
        return false;
    }
    bool isPalindrome(string s) {
        int l=s.length()-1,f=0,e=l;
        while(f<e)
        {
            while(f<e && !isa(s[f])) f++;
            while(f<e && !isa(s[e])) e--;
            if(s[f]>='a' && s[f]<='z') s[f]-=32;
            if(s[e]>='a' && s[e]<='z') s[e]-=32;
            if(s[f]!=s[e]) return false;
            f++;
            e--;
        }
        return true;
    }