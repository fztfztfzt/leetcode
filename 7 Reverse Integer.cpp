/*
Reverse Integer
Total Accepted: 99382 Total Submissions: 423096 Difficulty: Easy

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 
https://leetcode.com/problems/reverse-integer/

*/
12ms
 int reverse(int x) {
        long long n=0;
        if(x==INT_MIN) return 0;
        int flag=x>0?1:-1;
        x=abs(x);
        while(x)
        {
            n=n*10+x%10;
            if(flag>0 && n>INT_MAX) return 0;
            if(flag<0 && n-1>INT_MAX) return 0;
            x=x/10;
        }
       return flag*n;
    }
8ms
int reverse(int x) {
        int n=0;
        
        while(x)
        {
           
            if(x>0 && n>INT_MAX/10) return 0;
            if(x<0 && n<INT_MIN/10) return 0;
            n=n*10+x%10;
            x=x/10;
        }
       return n;
    }