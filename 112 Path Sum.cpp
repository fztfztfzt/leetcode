/*
Path Sum
Total Accepted: 71558 Total Submissions: 239584 Difficulty: Easy

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
For example:
Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1

return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

https://leetcode.com/problems/path-sum/
*/
12ms
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool f(TreeNode* root, int sum,int m)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==m) return true;
            else return false;
        }
        bool a=false,b=false;
        if(root->left!=NULL) a= f(root->left,sum,m+root->left->val);
        if(root->right!=NULL) b=f(root->right,sum,m+root->right->val);
        return a||b;
        
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root!=NULL) return f(root,sum,root->val);
        else return false;
    }
};