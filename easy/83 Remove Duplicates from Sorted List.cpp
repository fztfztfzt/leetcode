/*
Remove Duplicates from Sorted List
Total Accepted: 77865 Total Submissions: 224106 Difficulty: Easy

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3
https://leetcode.com/problems/remove-duplicates-from-sorted-list/
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 1. 16ms
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*p=head;
        if(head==NULL) return p;
        while(head->next!=NULL)
        {
            if(head->val==head->next->val)
            {
                head->next=head->next->next;
            }
            else
            {
                head=head->next;
            }
        }
        return p;
    }
};