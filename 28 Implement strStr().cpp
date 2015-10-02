/*
Implement strStr()
Total Accepted: 71622 Total Submissions: 314654 Difficulty: Easy

Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Update (2014-11-02):
The signature of the function had been updated to return the index instead of the pointer. If you still see your function signature returns a char * or String, please click the reload button to reset your code definition.

https://leetcode.com/problems/implement-strstr/
*/
普通方法：超时
int strStr(string haystack, string needle) {
        if(needle.empty()) return -1;
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                int j=0,k=i;
                for(;j<needle.length() && k<haystack.length() && haystack[k]==needle[j];++k,++j);
                if(j==needle.length()) return i;
            }
        }
        return -1;
    }
KMP：8ms
int strStr(string haystack, string needle) {
        if(haystack=="" && needle=="") return 0;
        vector<int> v(needle.length()+1,-1);
        int j=-1;
        for(int i=0;i<needle.length();)
        {
            if(j==-1 || needle[i]==needle[j]){++i;++j;v[i]=j;}
            else j=v[j];
        }
        //for(int i=0;i<haystack.length();)
        //{
            int i=0,k=0;
            while(k==-1 || k<needle.length() && i<haystack.length())
            {
                if(k==-1 || haystack[i]==needle[k]) ++i,++k;
                else k=v[k];
            }
            if(k>=needle.length()) return i-k;
        //}
        return -1;
        
    }