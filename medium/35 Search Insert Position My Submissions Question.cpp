/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 ¡ú 2
[1,3,5,6], 2 ¡ú 1
[1,3,5,6], 7 ¡ú 4
[1,3,5,6], 0 ¡ú 0
*/
Runtime: 8 ms
int searchInsert(vector<int>& nums, int target) {
        int begin=0,end = nums.size()-1,mid = 0,flag=0;
        while(begin<=end)
        {
            mid = (begin+end)>>1;
            if(nums[mid]>target) {flag=1;end = mid-1;}
            else if(nums[mid]<target) {begin = mid+1;flag=2;}
            else return mid;
        }
        if(flag==2) {mid++;}
        return mid;
    }