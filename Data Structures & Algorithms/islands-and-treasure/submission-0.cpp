class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, int distance)
    {
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]==-1)
        {
            return;
        }
        if(distance>grid[row][col])
            return;
        if(distance<grid[row][col])
        {
            grid[row][col]=distance;
        }
        
        dfs(grid,row+1,col,distance+1);
        dfs(grid,row-1,col,distance+1);
        dfs(grid,row,col-1,distance+1);
        dfs(grid,row,col+1,distance+1);
        return;
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==0)
                {
                    int distance=0;
                    dfs(grid,i,j,distance);
                }
            }
        }
    }
};
