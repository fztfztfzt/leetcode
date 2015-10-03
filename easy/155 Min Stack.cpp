/*
Min Stack
Total Accepted: 46096 Total Submissions: 228772 Difficulty: Easy

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    getMin() -- Retrieve the minimum element in the stack.
https://leetcode.com/problems/min-stack/
*/

32ms
class MinStack {
public:
    stack<pair<int,int>> s;
    void push(int x) {
        int min = s.empty()?x:getMin();
        if(min>x) s.push(pair<int,int>(x,x));
        else s.push(pair<int,int>(x,min));
    }

    void pop() {
        s.pop();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};