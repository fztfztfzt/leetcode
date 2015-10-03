/*
Number of 1 Bits
Total Accepted: 51567 Total Submissions: 135723 Difficulty: Easy

Write a function that takes an unsigned integer and returns the number of ¡¯1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ¡¯11' has binary representation 00000000000000000000000000001011, so the function should return 3.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.
https://leetcode.com/problems/number-of-1-bits/
*/
1.4ms
int hammingWeight(uint32_t n) {
        int sum=0;
        while(n)
        {
            if(n%2==1)
            {
                sum++;
            }
            n>>=1;
        }
        return sum;
    }
2.4ms
int hammingWeight(uint32_t n) {
        int sum=0;
        while(n)
        {
            n=n&(n-1);
            sum++;
        }
        return sum;
    }