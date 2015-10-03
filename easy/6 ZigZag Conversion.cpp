/*
ZigZag Conversion
Total Accepted: 59026 Total Submissions: 272113 Difficulty: Easy

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);

convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR". 
https://leetcode.com/problems/zigzag-conversion/
*/
12ms
string convert(string s, int numRows) {
        int n = 2*numRows-2;
        int l = s.length();
        string temps = "";
        if(numRows==1) return s;
        for(int i=0;i<numRows&&i<l;i++)
        {
            temps+=s[i];
            for(int j=i;j<l;)
            {
                if(i!=numRows-1)
                {
                    j+=(n-i*2);
                   if(j<l) temps+=s[j];
                }
                if(i!=0)
                {
                    j+=(i*2);
                    if(j<l) temps+=s[j];
                }
            }
        }
        return temps;
    }