class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return 0;
        if(grid[i][j])
        {
            grid[i][j] = 0;
            int left = dfs(grid, i - 1, j);
            int right= dfs(grid, i + 1, j);
            int bot = dfs(grid, i, j - 1);
            int top= dfs(grid, i, j + 1);
            return 1 + left + top + bot + right; 
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxx = 0;
        for(int i = 0; i < grid.size(); i ++)
        {
            for(int j = 0;j < grid[i].size(); j ++)
            {
                if(grid[i][j])
                    maxx = max(maxx, dfs(grid, i, j));
            }
        }
        return maxx;
    }
};