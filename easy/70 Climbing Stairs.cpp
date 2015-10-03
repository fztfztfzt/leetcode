/*
Climbing Stairs
Total Accepted: 71621 Total Submissions: 206366 Difficulty: Easy

You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? 
https://leetcode.com/problems/climbing-stairs/
*/

1.Timeout
 int climbStairs(int n) {
        if(n<0) return 0;
        if(n==0) return 1;
        return climbStairs(n-1)+climbStairs(n-2);
    }
2.0ms
int climbStairs(int n) {
        int a=1,b=2;
        if(n<=2) return n;
        for(int i=3;i<=n;i++)
        {
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }