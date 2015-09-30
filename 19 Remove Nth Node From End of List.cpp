/*
Remove Nth Node From End of List
Total Accepted: 74256 Total Submissions: 273874 Difficulty: Easy

Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
Given n will always be valid.
Try to do this in one pass. 

https://leetcode.com/problems/remove-nth-node-from-end-of-list/
*/
4ms
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1 = head,*p2=head;
        while(n--)
        {
            p1=p1->next;
        }
        if(p1==NULL) return head->next;
        p1=p1->next;
        while(p1)
        {
            p1=p1->next;
            p2=p2->next;
        }
        p2->next=p2->next->next;
        return head;
    }
};