/*Given an array where elements are sorted in ascending order, convert it to a height balanced BST.*/
https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
Runtime: 20 ms
   void BST(TreeNode *&node,vector<int>&nums,int left,int right)
    {
        if(left<=right)
        {
            int mid=(left+right)/2.0;//+0.5;a//all right
            node = new TreeNode(nums[mid]);
            BST(node->left,nums,left,mid-1);
            BST(node->right,nums,mid+1,right);
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        int left = 0,right = nums.size()-1;
        TreeNode *root ;
        BST(root,nums,left,right);
        return root;
        
    }