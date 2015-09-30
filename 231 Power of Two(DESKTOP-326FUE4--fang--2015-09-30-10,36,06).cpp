/*
Power of Two
Total Accepted: 29824 Total Submissions: 95174 Difficulty: Easy

Given an integer, write a function to determine if it is a power of two.

Credits:
Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.

https://leetcode.com/problems/power-of-two/
*/
8ms 判断1的个数
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<BT> q;
        stack<BT> p;
        vector<vector<int>> vv;
        vector<int> v;
        if(root!=NULL ) q.push(BT(root,0));
        else return vv;
        
        int now=0;
        while(!q.empty())
        {
            BT temp = q.front();
            q.pop();
            p.push(temp);
            if(temp.data->right!=NULL) q.push(BT(temp.data->right,temp.level+1));
            if(temp.data->left!=NULL) q.push(BT(temp.data->left,temp.level+1));
        }
        now = p.top().level;
        while(!p.empty())
        {
            BT temp = p.top();
            p.pop();
            if(now!=temp.level){vv.push_back(v);v.clear();now=temp.level;}
            v.push_back(temp.data->val);
        }
        vv.push_back(v);
        return vv;
    }
};