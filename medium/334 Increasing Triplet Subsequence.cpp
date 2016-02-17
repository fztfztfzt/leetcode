/*
 Given an unsorted array return whether an increasing subsequence of length 3 exists or not in the array.

Formally the function should:

    Return true if there exists i, j, k
    such that arr[i] < arr[j] < arr[k] given 0 ¡Ü i < j < k ¡Ü n-1 else return false. 

Your algorithm should run in O(n) time complexity and O(1) space complexity.

Examples:
Given [1, 2, 3, 4, 5],
return true.

Given [5, 4, 3, 2, 1],
return false.

Credits:
Special thanks to @DjangoUnchained for adding this problem and creating all test cases.

Subscribe to see which companies asked this question
*/

Runtime: 620 ms
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        vector<int> v(nums.size(),1);
        v[0]=1;
        int l = nums.size();
        for(int i=1;i<l;++i){
            int t=1;
            for(int j=i-1;j>=0;--j){
                if(nums[i]>nums[j] && t<(v[j]+1)) {t = v[j]+1;}
            }
            if(t==3) return true;
            v[i] = t;
        }
        return false;
    }
};
Runtime: 8 ms
bool increasingTriplet(vector<int>& nums) {
       int min1=INT_MAX,min2=INT_MAX;
       for(int i=0;i<nums.size();++i)
       {
          if(nums[i]<=min1)
          {
            min1 = nums[i];
          }else if(nums[i]<=min2)
          {
              min2 = nums[i];
          }else return true;
       }
       return false;
    }