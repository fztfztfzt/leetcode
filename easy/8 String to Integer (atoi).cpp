/*
String to Integer (atoi)
Total Accepted: 68303 Total Submissions: 530951 Difficulty: Easy

Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.

Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button to reset your code definition.

spoilers alert... click to show requirements for atoi.

https://leetcode.com/problems/string-to-integer-atoi/
*/
12ms
 int myAtoi(string str) {
        long long sum=0,l=str.length();
        int i=0,flag=1;
        while(str[i]==' ') ++i;
        if(str[i]=='-') flag=-1,++i;
        else if(str[i]=='+') ++i;
        for(;i<l;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                int pre=sum;
                sum=sum*10+str[i]-'0';
                if(flag==1 && pre>10 && sum>INT_MAX) {return INT_MAX;}
                else if(flag==-1 && pre>10 && sum-1>(INT_MAX)){return INT_MIN;}
            }
            else break;
        }
        return sum*flag;
    }
12 ms
int myAtoi(string str) {
        int sign = 1, base = 0, i = 0;
        while (str[i] == ' ') { i++; }
        if (str[i] == '-' || str[i] == '+') {
            sign = 1 - 2 * (str[i++] == '-'); 
        }
        while (str[i] >= '0' && str[i] <= '9') {
            if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)) {
                if (sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            base  = 10 * base + (str[i++] - '0');
        }
        return base * sign;
    }