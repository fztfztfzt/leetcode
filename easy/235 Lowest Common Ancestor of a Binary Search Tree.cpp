/*
Lowest Common Ancestor of a Binary Search Tree
Total Accepted: 27044 Total Submissions: 70832 Difficulty: Easy

Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the definition of LCA on Wikipedia: ¡°The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).¡±

        _______6______
       /              \
    ___2__          ___8__
   /      \        /      \
   0      _4       7       9
         /  \
         3   5

For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
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
1.µÝ¹é 40 ms
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*max = p->val>q->val?p:q;
        TreeNode*min = p->val>q->val?q:p;
        if(root->val>max->val && root->val>min->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(root->val<max->val && root->val<min->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        else if(root->val<=max->val && root->val>=min->val)
        {
            return root;
        }
        
    }
};
2.·ÇµÝ¹é 40ms
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*max = p->val>q->val?p:q;
        TreeNode*min = p->val>q->val?q:p;
		while(root)
		{
			if(root->val>max->val && root->val>min->val)
			{
				root = root->left;
			}
			else if(root->val<max->val && root->val<min->val)
			{
				root = root->right;
			}
			else if(root->val<=max->val && root->val>=min->val)
			{
				break;
			}
		}
		return root;
        
    }