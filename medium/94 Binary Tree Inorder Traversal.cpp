/*
Binary Tree Inorder Traversal
Total Accepted: 91196 Total Submissions: 245569 Difficulty: Medium

Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3

return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?
https://leetcode.com/problems/binary-tree-inorder-traversal/
*/
0ms 递归
vector<int> v;
    void shit(TreeNode * p)
    {
        if(!p) return;
        shit(p->left);
        v.push_back(p->val);
        shit(p->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        shit(root);
        return v;
    }
0ms 非递归
 vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> sta;
        if(!root) return v;
        TreeNode *temp = root;
        while(temp || !sta.empty())
        {
            while(temp) {sta.push(temp);temp=temp->left;}
            temp=sta.top();
            v.push_back(temp->val);
            sta.pop();
            temp=temp->right;
        }
        return v;
    } 