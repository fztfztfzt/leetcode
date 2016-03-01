/*Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.

Note: 
You may assume k is always valid, 1 ¡Ü k ¡Ü BST's total elements.

Follow up:
What if the BST is modified (insert/delete operations) often and you need to find the kth smallest frequently? How would you optimize the kthSmallest routine?*/
https://leetcode.com/problems/kth-smallest-element-in-a-bst/
Runtime: 20 ms
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
    int kthSmallest(TreeNode* root, int k) {
        int mid = getCount(root->left);
        if(k<=mid)
        {
            return kthSmallest(root->left,k);
        }else if(k>mid+1)
        {
            return kthSmallest(root->right,k-mid-1);
        }
        return root->val;
    }
    int getCount(TreeNode *node)
    {
        if(node==NULL) return 0;
        return 1+getCount(node->left)+getCount(node->right);
    }
};

Runtime: 24 ms
class Solution {
public:
    int count;
    int result;
    void DFS(TreeNode *node)
    {
       if(node==NULL) return;
       if(count) DFS(node->left);
       count--;
       if(count==0)
       {
           result = node->val;
       }
       if(count) DFS(node->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        count = k;
        DFS(root);
        return result;
    }
    
};