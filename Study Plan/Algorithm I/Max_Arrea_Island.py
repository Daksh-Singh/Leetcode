class Solution:
    def dfs(self,grid,i,j):
        grid[i][j] = 0
        area = 1
        for row,col in [(i + 1, j), (i - 1, j) ,(i, j + 1), (i, j - 1)]:
            if row >= 0 and row < len(grid) and col>=0 and col < len(grid[row]) and grid[row][col] == 1:
                area+=self.dfs(grid, row, col) 
        return area
            
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        maxArea = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    aArea = self.dfs(grid, i, j)
                    maxArea = max(maxArea, aArea)
        return maxArea
        