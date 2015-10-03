/*
 Merge Two Sorted Lists My Submissions Question Solution
 Total Accepted: 81065 Total Submissions: 247158 Difficulty: Easy
 Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 https://leetcode.com/problems/merge-two-sorted-lists/
 */

24ms
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode*min = l1->val<l2->val?l1:l2;
        ListNode*max = l1->val<l2->val?l2:l1;
        ListNode*head = min;
        ListNode*pre=head;
        min=min->next;
        while(min!=NULL && max!=NULL)
        {
            if(min->val<max->val) pre=min,min=min->next;
            else
            {
                pre->next=max;
                ListNode*temp=max->next;
                max->next=min;
                pre = max;
                max=temp;
                
            }
            // cout<<pre<<endl;
        }
        if(max!=NULL)
        {
            pre->next=max;
        }
        return head;
    }
};