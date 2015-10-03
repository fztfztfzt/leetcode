/*
Factorial Trailing Zeroes
Total Accepted: 37534 Total Submissions: 126963 Difficulty: Easy

Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.
https://leetcode.com/problems/factorial-trailing-zeroes/
*/
1.超时
int trailingZeroes(int n) {
        int sum=0;
        for(int i=5;i<=n;)
        {
            int j=i;
            if(j%5==0) i+=5;
            while(j%5==0)
            {
                sum++;
                j/=5;
            }
        }
        return sum;
    }
2.Time Limit Exceeded--->溢出了
int trailingZeroes(int n) {
        int sum=0;
        for(int i=5;i<=n;i*=5)
        {
           sum+=n/i; 
		   if(i>INT_MAX/5) break;//添加该句 4ms
        }
        return sum;
    }
3.4ms
int trailingZeroes(int n) {
        int r=0;
        while(n>=5)
        {
           n=n/5; 
           r+=n;
        }
        return r;
    }