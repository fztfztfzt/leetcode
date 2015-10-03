/*
Delete Node in a Linked List
Total Accepted: 31433 Total Submissions: 69940 Difficulty: Easy

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
https://leetcode.com/problems/delete-node-in-a-linked-list/
*/
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
    void deleteNode(ListNode* node) {
            ListNode* p = node->next;
            node->val = p->val;
            node->next = p->next;
            delete p;
    }
};