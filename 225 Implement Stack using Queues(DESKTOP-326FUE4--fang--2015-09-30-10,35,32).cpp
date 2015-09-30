/*
用队列模拟栈
Implement Stack using Queues 
Total Accepted: 18337 Total Submissions: 60134 Difficulty: Easy

Implement the following operations of a stack using queues.

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    empty() -- Return whether the stack is empty.

Notes:

    You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.
    Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.
    You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).

Update (2015-06-11):
The class name of the Java function had been updated to MyStack instead of Stack. 
https://leetcode.com/problems/implement-stack-using-queues/
*/
oms
class Stack {
public:
    queue<int> q1,q2;
    int flag=0;
    // Push element x onto stack.
    void push(int x) {
        q1.push(x);
        
    }

    // Removes the element on top of the stack.
    void pop() {
        int l=q1.size();
        while(l-- >1)
        {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        q1.pop();
        while(!q2.empty())
        {
            int temp = q2.front();
            q2.pop();
            q1.push(temp);
        }
    }

    // Get the top element.
    int top() {
        int l=q1.size();
        while(l-- >1)
        {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        return q1.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return q1.empty();
    }
};