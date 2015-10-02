/*
Add Binary
Total Accepted: 58006 Total Submissions: 232907 Difficulty: Easy

Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100". 
https://leetcode.com/problems/add-binary/
*/
4ms
string addBinary(string a, string b) {
        int jin=0;
        string c="";
        
        for(int i=a.length()-1,j=b.length()-1;i>=0||j>=0;i--,j--)
        {
            int temp=0;
            if(i>=0) temp+=a[i]-'0';
            if(j>=0) temp+=b[j]-'0';
            c.insert(0,1,(temp+jin)%2+'0');
            if(temp+jin>1)
            {
                jin=1;
            }else jin = 0;
            
        }
        if(jin) c.insert(0,1,jin+'0');
        return c;
    }