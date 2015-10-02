/*
Palindrome Linked List
Total Accepted: 21411 Total Submissions: 92614 Difficulty: Easy

Given a singly linked list, determine if it is a palindrome.

Follow up:
Could you do it in O(n) time and O(1) space?
https://leetcode.com/problems/palindrome-linked-list/
*/
32ms
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
        ListNode *slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*tail=slow->next;
        slow->next=NULL;
        while(tail)
        {
            ListNode *temp = tail->next;
            tail->next=slow;
            slow=tail;
            tail=temp;
        }
        tail=slow;
        while(tail!=NULL && head!=tail && head->val==tail->val)
        {
            head=head->next;
            tail=tail->next;
        }
        return head==tail || tail==NULL;
        
    }
};