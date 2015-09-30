/*
Valid Parentheses
Total Accepted: 70858 Total Submissions: 264158 Difficulty: Easy

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
https://leetcode.com/problems/valid-parentheses/
*/
0ms
bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]== '{') st.push(s[i]);
            else if(s[i]==')') {if(st.empty() || st.top()!='(') return false;st.pop();}
            else if(s[i]==']') {if(st.empty() || st.top()!='[') return false;st.pop();}
            else if(s[i]=='}') {if(st.empty() || st.top()!='{') return false;st.pop();}
            
        }
        if(!st.empty()) return false;
        return true;
    }