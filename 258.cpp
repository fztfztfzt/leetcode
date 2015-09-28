/*
 https://leetcode.com/problems/add-digits/
 Add Digits My Submissions Question Solution
 Total Accepted: 24876 Total Submissions: 53882 Difficulty: Easy
 Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 
 For example:
 
 Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 
 Follow up:
 Could you do it without any loop/recursion in O(1) runtime?
 */
//loop:
int addDigits(int num) {
    int a=0;
    while(num)
    {
        a+=num%10;
        num=num/10;
        if(num==0 && a>=10)
        {
            num=a;
            a=0;
        }
        else if(num==0 && a<10)
        {
            break;
        }
    }
    return a;
}
//recursion
int addDigits(int num) {
    if(num<10) return num;
    int a=0;
    while(num)
    {
        a+=num%10;
        num /=10;
    }
    return addDigits(a);
}
//other
//任何一个整数模9同余于它的各数位上数字之和
int addDigits(int num) {
    if(num==0) return  num;
    int a = num%9;
    if (a==0) return 9;
    else return a;
}