/*
Valid Sudoku
Total Accepted: 49308 Total Submissions: 178726 Difficulty: Easy

Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.

The Sudoku board could be partially filled, where empty cells are filled with the character '.'.


A partially filled sudoku which is valid.
https://leetcode.com/problems/valid-sudoku/
*/
12ms memset会出问题
bool isValidSudoku(vector<vector<char>>& board) {
        int s1[10]={0},s2[10]={0},s3[10]={0};
        for(int i=0;i<9;i++)
        {
            for(int k=0;k<10;k++) s1[k]=0,s2[k]=0;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.') 
                {
                    s1[board[i][j]-'0']++;
                    if(s1[board[i][j]-'0']>1) return false;
                }
                if(board[j][i]!='.')
                {
                    s2[board[j][i]-'0']++;
                    if(s2[board[j][i]-'0']>1) return false;
                }
                if(i%3==0 && j%3==0)
                {for(int k=0;k<10;k++) s3[k]=0;
                    for(int m=0;m<3;m++)
                    for(int n=0;n<3;n++)
                    {
                        
                        if(board[i+m][j+n]!='.')
                        {
                            s3[board[i+m][j+n]-'0']++;
                            if(s3[board[i+m][j+n]-'0']>1) return false;
                        }
                    }
                }
                
            }
        }
     return true;   
    }