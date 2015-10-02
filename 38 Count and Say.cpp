/*
Count and Say
Total Accepted: 56436 Total Submissions: 218728 Difficulty: Easy

The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

https://leetcode.com/problems/count-and-say/
*/
0ms count<10 ----可证明

string countAndSay(int n) {
        int count =1;
        string s="1";
        string s2="";
        n=n-1;
        while(n--)
        {
            for(int i=0;i<s.length();i++)
            {
                if(i<s.length()-1 && s[i]==s[i+1]) count++;
                else 
                {
                    s2.push_back(char(count+'0'));
                    s2.push_back(s[i]);
                    //s2.insert(s2.end(),s[i]);
                    count=1;
                }
            }
            s=s2;
            s2="";
        }
        return s;
    }