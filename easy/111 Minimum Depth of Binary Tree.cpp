/*
Minimum Depth of Binary Tree
Total Accepted: 73018 Total Submissions: 250662 Difficulty: Easy

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

https://leetcode.com/problems/minimum-depth-of-binary-tree/
*/
12ms 深搜
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
    int min=INT_MAX;
    int md(TreeNode *node,int count)
    {
        if(node->left==NULL && node->right==NULL)
        {
            if(count<min) min = count;
        }
        if(node->left!=NULL && count<min) md(node->left,count+1);
        if(node->right!=NULL && count<min) md(node->right,count+1);
    }
    int minDepth(TreeNode* root) {
        if(root!=NULL) {md(root,1);return min;}
        return 0;
        
    }
};
12ms 广搜
class Solution {
public:
    struct BT
    {
        TreeNode *t;
        int level;
        BT(TreeNode* temp,int n){t=temp,level=n;}
    };
    int minDepth(TreeNode* root) {
        queue<BT> q;
        if(root==NULL) return 0;
        q.push(BT(root,1));
        while(!q.empty())
        {
            BT temp = q.front();
            q.pop();
            if(temp.t->left==NULL && temp.t->right==NULL) return temp.level;
            if(temp.t->left!=NULL) q.push(BT(temp.t->left,temp.level+1));
            if(temp.t->right!=NULL) q.push(BT(temp.t->right,temp.level+1));
        }
    }
};