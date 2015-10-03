/*
Reverse Bits
Total Accepted: 37655 Total Submissions: 129436 Difficulty: Easy

Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Follow up:
If this function is called many times, how would you optimize it?

Related problem: Reverse Integer

https://leetcode.com/problems/reverse-bits/
*/
4ms
uint32_t reverseBits(uint32_t n) {
        int m=0,i=31;
        if(n&1==1) m+=1;
        while(i--)
        {
            m<<=1;
            n>>=1;
            if(n&1==1) m+=1;
        }
        return m;
    }