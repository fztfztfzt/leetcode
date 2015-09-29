/*
Pascal's Triangle II
Total Accepted: 53146 Total Submissions: 179062 Difficulty: Easy

Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?


https://leetcode.com/problems/pascals-triangle-ii/
*/
1.0ms 更改Pascal's Triangle得到
vector<int> getRow(int rowIndex) {
        vector<int> v1,v2;
        v1.push_back(1);
        for(int i=2;i<=rowIndex+1;i++)
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
            v1.swap(v2);
            v2.clear();
        }
        return v1;
    }
2.0ms O(k)
vector<int> getRow(int rowIndex) {
	vector<int> v(rowIndex+1,1);
	for(int i=1;i<=rowIndex;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(j==0 || j==i) v[j]=1;
			else v[j]=v[j]+v[j-1];
		}
	}
	
	return v;
}