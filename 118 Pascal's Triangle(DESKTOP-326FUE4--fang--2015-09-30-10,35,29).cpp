/*
Pascal's Triangle
Total Accepted: 58746 Total Submissions: 192546 Difficulty: Easy

Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]

https://leetcode.com/problems/pascals-triangle/
*/
0ms
vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> vv;
        if(numRows==0) return vv;
        vector<int> v1,v2;
        v1.push_back(1);
        vv.push_back(v1);
        for(int i=2;i<=numRows;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j==0 || j==i-1)
                {
                    v2.push_back(1);
                }
                else
                {
                    v2.push_back(v1[j-1]+v1[j]);
                }
            }
            vv.push_back(v2);
            v1.swap(v2);
            v2.clear();
        }
        return vv;
    }