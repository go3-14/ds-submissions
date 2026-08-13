class Solution {
public:
    
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }

        while(!q.empty())
        {
            auto [row,col]=q.front();
            q.pop();
            if(row>0 && grid[row-1][col]==INT_MAX)
            {
                grid[row-1][col]=1+grid[row][col];
                q.push({row-1,col});
            }
            if(col>0 && grid[row][col-1]==INT_MAX)
            {
                grid[row][col-1]=1+grid[row][col];
                q.push({row,col-1});
            }
            if(row+1<grid.size() && grid[row+1][col]==INT_MAX)
            {
                grid[row+1][col]=1+grid[row][col];
                q.push({row+1,col});
            }
            if(col+1<grid[0].size() && grid[row][col+1]==INT_MAX)
            {
                grid[row][col+1]=1+grid[row][col];
                q.push({row,col+1});
            }
        }

    }
};
