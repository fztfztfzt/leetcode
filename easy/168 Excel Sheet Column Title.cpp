/*
Excel Sheet Column Title
Total Accepted: 38732 Total Submissions: 205736 Difficulty: Easy

Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
	
https://leetcode.com/problems/excel-sheet-column-title/
*/
0ms
string convertToTitle(int n) {
        string s="";
        n-=1;
        while(n>=0)
        {
            s.insert(0,1,n%26+'A');
            n=n/26-1;
        }
        return s;
    }