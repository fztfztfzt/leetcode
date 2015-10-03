/*
Roman to Integer
Total Accepted: 54465 Total Submissions: 155991 Difficulty: Easy

Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.
https://leetcode.com/problems/roman-to-integer/
*/
1.40ms
 int cmp(char a,char b)
    {
        if(a==b) return 0;
        char *s="IVXLCDM";
        for(int i=0;i<7;i++)
        {
            if(a==s[i] && b!=s[i]) return -1;
            if(b==s[i] && a!=s[i]) return 1;
        }
    }
    int romanToInt(string s) {
        int num=0,sum=0;
        for(int i=0;i<s.length();i++)
        {
           
            if(s[i]=='I') num=1;
            if(s[i]=='V') num=5;
            if(s[i]=='X') num=10;
            if(s[i]=='L') num=50;
            if(s[i]=='C') num=100;
            if(s[i]=='D') num=500;
            if(s[i]=='M') num=1000;
            if(i<s.length()-1 && cmp(s[i],s[i+1])<0) sum-=num;
            else sum+=num;
        }
        return sum;
    }