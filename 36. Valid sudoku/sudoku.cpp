class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            unordered_set<char> mat1;
            unordered_set<char> mat2;
            unordered_set<char> mat3;
            
        for(int i=0;i<9;i++)
        {
            unordered_set<char> ch1;
            unordered_set<char> ch2;
            for(int j=0;j<9;j++)
            {
                
                if(board[i][j]!='.')
                {
                    if(ch1.count(board[i][j])>0)
                        return false;
                    else ch1.insert(board[i][j]);
                }
                if(board[j][i]!='.')
                  {
                    if(ch2.count(board[j][i])>0)
                        return false;
                    else ch2.insert(board[j][i]);
                }  
                if(j<3 && board[i][j]!='.')
                {
                    if(mat1.count(board[i][j])>0)
                        return false;
                    else mat1.insert(board[i][j]);
                }
                else if(j<6 && board[i][j]!='.')
                {

                    if(mat2.count(board[i][j])>0)
                        return false;
                    else mat2.insert(board[i][j]);
                }
                else if(j<9 && board[i][j]!='.')
                {

                    if(mat3.count(board[i][j])>0)
                        return false;
                    else mat3.insert(board[i][j]);
                }
               }//for j
            if(i==2 || i==5)
            {
                mat1.clear();
                mat2.clear();
                mat3.clear();
            }
 
            ch1.clear();
            ch2.clear();
                        
        }
                
        
        return true;
    }
};
