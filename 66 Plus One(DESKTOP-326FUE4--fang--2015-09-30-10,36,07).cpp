/*
Plus One
Total Accepted: 65245 Total Submissions: 213266 Difficulty: Easy

Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.

https://leetcode.com/problems/plus-one/
*/
 4ms
 vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
        for(int i=l;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                if(i==0) digits.insert(digits.begin(),1);
            }
            else
            {
                digits[i]+=1;
                break;
            }
        }
        return digits;
        
    }