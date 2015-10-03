/*
nvert Binary Tree
Total Accepted: 38716 Total Submissions: 98830 Difficulty: Easy

Invert a binary tree.

     4
   /   \
  2     7
 / \   / \
1   3 6   9

to

     4
   /   \
  7     2
 / \   / \
9   6 3   1
https://leetcode.com/problems/invert-binary-tree/
*/
1. 4ms
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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        TreeNode *p = root->left;
        root->left = root->right;
        root->right = p;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
2.0ms
TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        if(root->left==NULL && root->right==NULL)
        {
            return root;
        }
        else
        {
            TreeNode *p = root->left;
            root->left = root->right;
            root->right = p;
            invertTree(root->left);
            invertTree(root->right);
            return root;
        }
    }
3.·ÇµÝ¹é 0ms
TreeNode* invertTree(TreeNode* root) {
        TreeNode*p=root;
        stack<TreeNode*> s;
        if(root!=NULL) s.push(p);
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            TreeNode *p = temp->left;
            temp->left = temp->right;
            temp->right = p;
            if(temp->left!=NULL) s.push(temp->left);
            if(temp->right!=NULL) s.push(temp->right);
        }
        return root;
    }