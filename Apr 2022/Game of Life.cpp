class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
	    vector<pair<int,int>>dir={{0,1},{0,-1},{1,1},{1,-1},{1,0},{-1,-1},{-1,0},{-1,1}};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int noOfLive=0;
                for(int k=0;k<dir.size();k++)
                {
    if(i+dir[k].first>=0 && i+dir[k].first<n && j+dir[k].second>=0 && j+dir[k].second<m && abs(board[i+dir[k].first][j+dir[k].second])%2==1)
        noOfLive++;
                }

                if(board[i][j]==1)
                {
                    if(noOfLive==2 || noOfLive==3)
                        continue;
                    else 
                        board[i][j]=-1;	
                }
                else
                {
                    if(noOfLive==3)
                        board[i][j]=-2;

                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]<0)
                    board[i][j]=abs(board[i][j]+1);
            }
        }
        
    }
};


