/*
Intersection of Two Linked Lists
Total Accepted: 45332 Total Submissions: 154591 Difficulty: Easy

Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:

A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3

begin to intersect at node c1.

Notes:

    If the two linked lists have no intersection at all, return null.
    The linked lists must retain their original structure after the function returns.
    You may assume there are no cycles anywhere in the entire linked structure.
    Your code should preferably run in O(n) time and use only O(1) memory.

https://leetcode.com/problems/intersection-of-two-linked-lists/
*/
1.52ms
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA,*b=headB;
        while(a!=b)
        {
            a = a?a->next:headB;
            b = b?b->next:headA;
        }
        return a;
    }
2.48ms
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
    int getLen(ListNode *a)
    {
        int num=0;
        while(a)
        {
            num++;
            a=a->next;
        }
        return num;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la=getLen(headA),lb=getLen(headB);
        ListNode *a = headA,*b=headB;
        if(la>lb)
        {
            swap(la,lb);
            a=headB;
            b=headA;
        }
        int l = lb-la;
        while(l--) b=b->next;
        while(a!=b)
        {
            a=a->next;
            b=b->next;
        }
        if(a==NULL && b==NULL) return NULL;
        else return a;
    }
};