/*
Remove Linked List Elements
Total Accepted: 33805 Total Submissions: 130756 Difficulty: Easy

Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5 

https://leetcode.com/problems/remove-linked-list-elements/
*/
28ms
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head; 
        ListNode *p=head;
        while(p->next)
        {
            if(p->next->val==val) p->next=p->next->next;
            else p=p->next;
        }
        if(head->val==val) head=head->next;
        return head;
    }
};