/*
Merge Sorted Array
Total Accepted: 69497 Total Submissions: 238980 Difficulty: Easy

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.

https://leetcode.com/problems/merge-sorted-array/
*/
4ms
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,count=0;
        while(i<m+count&&j<n)
        {
            if(nums1[i]<nums2[j]) ++i;
            else 
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                ++j;
                ++i;
                count++;
            }
        }
        if(i==m+count)
        {
            while(j<n)
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                ++j;
                i++;
            }
        }
        nums1.erase(nums1.begin()+m+n,nums1.end());
    }