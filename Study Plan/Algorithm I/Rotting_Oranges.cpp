class Solution {
public:
    int orangesRotting(vector<vector<int>>& g)
    {
        queue<pair<int,int>> q;

        int oranges = 0, time = 0;
        for(int i = 0; i < g.size(); ++i) 
            for(int j = 0; j < g[0].size(); ++j) 
            {
                if(g[i][j] == 2) q.push({i, j});
                if(g[i][j] == 1) oranges ++;
            }

        if(oranges == 0) 
            return time;

        while(not q.empty()) 
        {
            int x = q.size();
            while(x --) 
            {
                if(oranges == 0)
                    break;   

                auto t = q.front();
                q.pop();
                int i = t.first, j = t.second;

                if(i > 0 and g[i - 1][j] == 1) q.push({i - 1, j}), g[i - 1][j] = 2, oranges --;
                if(j > 0 and g[i][j - 1] == 1) q.push({i, j - 1}), g[i][j - 1] = 2, oranges --;
                if(i < g.size() - 1 and g[i + 1][j] == 1) q.push({i + 1, j}), g[i + 1][j] = 2, oranges --;
                if(j < g[0].size() - 1 and g[i][j + 1] == 1) q.push({i, j + 1}), g[i][j + 1] = 2,     oranges --;
            }
            time ++;
            if(oranges == 0) return time;
        }

        if(not oranges == 0) return -1;
        return time;
    }
};