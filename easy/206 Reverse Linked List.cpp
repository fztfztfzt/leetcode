/*
Reverse Linked List
Total Accepted: 46785 Total Submissions: 138152 Difficulty: Easy

Reverse a singly linked list.

click to show more hints.

https://leetcode.com/problems/reverse-linked-list/
*/

8ms
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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = head;
        if(head==NULL) return head;
        ListNode *p = head->next;
        while(p)
        {
            ListNode*q = p->next;
            p->next = pre;
            pre = p;
            p=q;
        }
        head->next=NULL;
        return pre;
        
    }
};