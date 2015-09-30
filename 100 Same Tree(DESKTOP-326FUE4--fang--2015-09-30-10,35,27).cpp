/*
Same Tree
Total Accepted: 82343 Total Submissions: 197584 Difficulty: Easy

Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value. 
https://leetcode.com/problems/same-tree/
*/
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        else if((p==NULL && q!=NULL)||(p!=NULL && q==NULL)) return false;
        if(p->val!=q->val) return false;
        else return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }