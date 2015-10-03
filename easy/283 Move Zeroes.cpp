 /*
 Move Zeroes
Total Accepted: 12111 Total Submissions: 28751 Difficulty: Easy

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:

    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.
https://leetcode.com/problems/move-zeroes/
 */
//1.	40 ms
 void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        for (int i=0;i<l;)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                l--;
            }
            else 
            {
                i++;
            }
        }
    }
//2.	16 ms 
void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int begin = -1;
        for (int i=0;i<l;i++)
        {
            if(nums[i]==0 && begin==-1)
            {
                begin=i;
            }
            if(nums[i]!=0 && begin!=-1)
            {
                int temp = nums[begin];
                nums[begin]=nums[i];
                nums[i]=temp;
                begin+=1;
            }
            
        }
    }