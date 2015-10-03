/*
Binary Tree Paths
Total Accepted: 15289 Total Submissions: 69908 Difficulty: Easy

Given a binary tree, return all root-to-leaf paths.

For example, given the following binary tree:

   1
 /   \
2     3
 \
  5

All root-to-leaf paths are:

["1->2->5", "1->3"]
https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> v;
    string itoa(int b)//or use to_string
    {
        string s="";
        int a=abs(b);
        while(a)
        {
            s.insert(0,1,a%10+'0');
            a/=10;
        }
        if(b<0) s.insert(0,1,'-');
        return s;
    }
    void fun(TreeNode *node,string s)
    {
        s+=itoa(node->val);
        if(node->left==NULL && node->right==NULL) 
        {
            v.push_back(s);
        }
        else 
        {
            s+="->";
        }
        if(node->left!=NULL) fun(node->left,s);
        if(node->right!=NULL) fun(node->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root!=NULL) fun(root,"");
        return v;
    }
};