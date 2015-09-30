/*
Binary Tree Level Order Traversal
Total Accepted: 68204 Total Submissions: 230967 Difficulty: Easy

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
https://leetcode.com/problems/binary-tree-level-order-traversal/
*/
8ms 
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
struct BT
    {
        TreeNode* data;
        int level;
        BT(TreeNode*a,int b){data=a,level=b;}
    };
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<BT> q;
        vector<vector<int>> vv;
        vector<int> v;
        if(root!=NULL ) q.push(BT(root,0));
        else return vv;
        int now=0;
        while(!q.empty())
        {
            BT temp = q.front();
            if(now!=temp.level) 
            {
                vv.push_back(v);
                v.clear();
                now = temp.level;
            }
            v.push_back(temp.data->val);
            q.pop();
            if(temp.data->left!=NULL) q.push(BT(temp.data->left,temp.level+1));
            if(temp.data->right!=NULL) q.push(BT(temp.data->right,temp.level+1));
            
        }
        vv.push_back(v);
        return vv;
    }
};