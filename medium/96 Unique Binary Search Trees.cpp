/*Given n, how many structurally unique BST's (binary search trees) that store values 1...n?

For example,
Given n = 3, there are a total of 5 unique BST's.

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
Subscribe to see which companies asked this question*/
https://leetcode.com/problems/unique-binary-search-trees/
Runtime: 0 ms
int numTrees(int n) {
        int *c  = new int[n+1];
        c[0]=c[1]=1;
        for(int i=2;i<=n;++i)
        {
            c[i]=0;
            for(int j=1;j<=i;++j)
            {
                c[i]+=c[j-1]*c[i-j];
            }
        }
        return c[n];
    }