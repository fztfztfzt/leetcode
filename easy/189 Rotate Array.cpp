/*
Rotate Array
Total Accepted: 44564 Total Submissions: 239579 Difficulty: Easy

Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

[show hint]

Related problem: Reverse Words in a String II
https://leetcode.com/problems/rotate-array/
*/
24ms 空间复杂度O(n)
void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            v[(i+k)%nums.size()] = nums[i];
        }
        nums.swap(v);
    }
2 24ms O(n) O(1)
{
	void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
}