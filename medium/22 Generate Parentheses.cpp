/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:

"((()))", "(()())", "(())()", "()(())", "()()()"
*/
Runtime: 4 ms
class Solution {
public:
    void fun(vector<string> &v,string s,int n,int m){
        if(m==0)
        {
            v.push_back(s);
            return;
        }
        if(n>0) {fun(v,s+"(",n-1,m);}
        if(m>n) {fun(v,s+")",n,m-1);}
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        fun(v,"",n,n);
        return v;
    }
};