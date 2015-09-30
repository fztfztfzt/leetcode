/*
Symmetric Tree
Total Accepted: 73272 Total Submissions: 229588 Difficulty: Easy

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3

But the following is not:

    1
   / \
  2   2
   \   \
   3    3

Note:
Bonus points if you could solve it both recursively and iteratively. 
https://leetcode.com/problems/symmetric-tree/
*/

4ms
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
    bool is(TreeNode *a,TreeNode *b)
    {
        if(a==NULL && b==NULL) return true;
        if(a!=NULL && b!=NULL && a->val==b->val) return is(a->left,b->right) && is(a->right,b->left);
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        if(root->left!=NULL && root->right!=NULL)
        {
            return is(root->left,root->right);
        }
        else return false;
    }
};