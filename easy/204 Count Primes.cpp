/*
Count Primes
Total Accepted: 34201 Total Submissions: 164215 Difficulty: Easy

Description:

Count the number of prime numbers less than a non-negative number, n.
https://leetcode.com/problems/count-primes/
*/
48ms 素数筛法
int countPrimes(int n) {
        bool *b = new bool [n];
        memset(b,true,sizeof(bool)*n);
        for(int i=2;i*i<n;i++)
        {
            if(b[i])
            {
                for(int j=i*i;j<n;j+=i)
                {
                    b[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(b[i]) count++;
        }
        return count;
    }