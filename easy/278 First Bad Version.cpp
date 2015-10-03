/*
First Bad Version
Total Accepted: 12404 Total Submissions: 62802 Difficulty: Easy

You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API. 
https://leetcode.com/problems/first-bad-version/
*/
0ms
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n,mid=0;
        while(s<e)
        {
            mid=(s/2+e/2);//注意加法的溢出
            if(isBadVersion(mid)) e=mid;
            else s=mid+1;
        }
        return s;
    }
};