class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    queue<array<int, 3>>q;
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j ++)
        {
            if(mat[i][j] == 0)
            {
                q.push({i, j, 0});
            }
        }
    }
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while(!q.empty())
    {
        array<int, 3>front = q.front();
        q.pop();
        ans[front[0]][front[1]] = front[2];
        for(int k = 0; k < 4; k ++){
            int nx = front[0] + dx[k];
            int ny = front[1] + dy[k];
            if(nx < 0 || ny < 0 || nx == n || ny == m || mat[nx][ny] != 1)
                continue;
            mat[nx][ny] = 0;
            q.push({nx,ny,front[2] + 1});
        }
    }
    return ans;
    }
};