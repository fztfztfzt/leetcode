/*Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. You may assume that each word will contain only lower case letters. If no such two words exist, return 0.

Example 1:
Given ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
Return 16
The two words can be "abcw", "xtfn".

Example 2:
Given ["a", "ab", "abc", "d", "cd", "bcd", "abcd"]
Return 4
The two words can be "ab", "cd".

Example 3:
Given ["a", "aa", "aaa", "aaaa"]
Return 0
No such pair of words.

Credits:
Special thanks to @dietpepsi for adding this problem and creating all test cases.

Subscribe to see which companies asked this question*/
https://leetcode.com/problems/maximum-product-of-word-lengths/
³¬Ê±
class Solution {
public:
    bool haveSameWord(string a,string b)
    {
        for(auto i:a)
        {
            for(auto j:b)
            {
                if(i==j) return false;
            }
        }
        return true;
    }
    int maxProduct(vector<string>& words) {
        int len =0;
        int minlen=0;
        int maxlen = 0;
        for(int i=1;i<words.size();++i)
        {
            string s = words[i];
            minlen = maxlen==0?0:ceil((float)maxlen/s.length());
            for(int j=0;j<i;++j)
            {
                if(words[j].length()>=minlen && haveSameWord(s,words[j]))
                {
                    maxlen = words[j].length() * s.length();
                    minlen = words[j].length();
                }
            }
            
        }
        return maxlen;
    }
};
Runtime: 128 ms
  int maxProduct(vector<string>& words) {
        vector<int> mask(words.size());
    int result = 0;
    for (int i=0; i<words.size(); ++i) {
        for (char c : words[i])
            mask[i] |= 1 << (c - 'a');
        for (int j=0; j<i; ++j)
            if (!(mask[i] & mask[j]))
                result = max(result, int(words[i].size() * words[j].size()));
    }
    return result;
    }