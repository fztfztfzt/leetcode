/*
Linked List Cycle
Total Accepted: 79587 Total Submissions: 217509 Difficulty: Medium

Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space? 
https://leetcode.com/problems/linked-list-cycle/
*/

12ms
bool hasCycle(ListNode *head) {
        ListNode *slow,*fast;
        slow=fast=head;
        while(fast!=NULL && fast->next!=NULL && slow!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast!=NULL && slow!=NULL && fast==slow) return true;
        }
        return false;
        
    }