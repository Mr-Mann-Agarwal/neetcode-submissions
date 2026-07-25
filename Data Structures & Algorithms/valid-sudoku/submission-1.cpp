class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //std::map<int, std::vector<std::pair<int, int>>> mpp;

        for (int k = 0; k < 3; k++) 
        {
            for (int l = 0; l < 3; l++) 
            {
                std::map<int,int>m;
                for (int i = 0; i < 3; i++) 
                {

                    for (int j = 0; j < 3; j++) 
                    {
                        if (board[(3*k)+i][(3*l)+j] != '.') 
                        {
                           // mpp[board[(3*k)+i][(3*l)+j]].push_back({i, j});
                            m[board[(3*k)+i][(3*l)+j]]++;
                            if(m[board[(3*k)+i][(3*l)+j]]>1)
                            {
                                cout<<"FUCK";
                                return false;
                            }

                        }
                    }
                }

            }
        }

        for(int i=0;i<9;i++)
        {
            std::map<int,int>m2;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                m2[board[i][j]]++;
                if(m2[board[i][j]]>1)
                {
                    cout<<"FUCK";
                    return false;
                }
                }
            }
        }

        for(int i=0;i<9;i++)
        {
            std::map<int,int>m2;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {
                m2[board[j][i]]++;
                if(m2[board[j][i]]>1)
                {
                    cout<<"FUCK";
                    return false;
                }
                }
            }
        }






        return true;








    }
};
