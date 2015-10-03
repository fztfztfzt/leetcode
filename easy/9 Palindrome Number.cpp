/*
Palindrome Number
Total Accepted: 83099 Total Submissions: 286094 Difficulty: Easy

Determine whether an integer is a palindrome. Do this without extra space.

https://leetcode.com/problems/palindrome-number/
*/
72ms
bool isPalindrome(int x) {
        if(x<0) return false;
        int n=0;
        int m=x;
        while(m)
        {
            n=n*10+m%10;
            m/=10;
        }
        return n==x;
    }
76ms
bool isPalindrome(int x) {
         if (x < 0)  
            return false;  
              
        if (x < 10)  
            return true;  
              
        int digits = 0;  
        int t = x;  
        int d = 0;  
        while(t != 0) t /= 10, ++d;  
          
        int left = pow(10, d - 1);  
        int right = 1;  
        while( left >= right)  
        {  
            if (x / left % 10 != x / right % 10)  
                return false;  
              
            left /= 10;  
            right *= 10;  
        }  
        return true;  
    }