/*
Happy Number
Total Accepted: 33026 Total Submissions: 101225 Difficulty: Easy

Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

    12 + 92 = 82
    82 + 22 = 68
    62 + 82 = 100
    12 + 02 + 02 = 1

Credits:
Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.
https://leetcode.com/problems/happy-number/
*/
1. 8ms 
class Solution {
public:
    int squares(int n)
    {
        int sum=0;
        int digit=0;
        while(n)
        {
            digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> v;
        
        int flag=0;
        while(n!=1)
        {
            v.insert(n);
            n=squares(n);
            if(v.count(n)!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) return true;
        else return false;
    }
};

2. 0ms 不知原理
class Solution {
public:
    int squares(int n)
    {
        int sum=0;
        int digit=0;
        while(n)
        {
            digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int flag=0;
        while(n>=10)
        {
            n=squares(n);
        }
        return n==1 or n==7;
    }
};