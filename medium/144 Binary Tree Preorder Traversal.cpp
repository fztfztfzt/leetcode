/*
Binary Tree Preorder Traversal
Total Accepted: 90860 Total Submissions: 244199 Difficulty: Medium

Given a binary tree, return the preorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3

return [1,2,3]. 
https://leetcode.com/problems/binary-tree-preorder-traversal/
*/
0ms 递归
void fun(TreeNode *node,vector<int>& v)
    {
        if(node)
        {
            v.push_back(node->val);
            fun(node->left,v);
            fun(node->right,v);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        fun(root,v);
        return v;
    }

0ms 非递归
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        if(root) s.push(root);
        while(!s.empty())
        {
            root = s.top();
            s.pop();
            v.push_back(root->val);
            if(root->right) s.push(root->right);
            if(root->left) s.push(root->left);
        }
        return v;
    }