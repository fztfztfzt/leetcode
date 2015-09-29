/*
Balanced Binary Tree
Total Accepted: 74565 Total Submissions: 231794 Difficulty: Easy

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1. 

https://leetcode.com/problems/balanced-binary-tree/
*/
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
    int maxDepth(TreeNode *p)
    {
        if(p==NULL) return 0;
        return max(maxDepth(p->left),maxDepth(p->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        return abs(maxDepth(root->left)-maxDepth(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
};