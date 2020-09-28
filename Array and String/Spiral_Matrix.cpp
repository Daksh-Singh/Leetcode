class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans;
        int m = matrix.size(), n = matrix[0].size(); 
        int row_start = 0, col_start = 0, row_end = m-1, col_end = n-1;
        while(true) {
            if(ans.size() == m*n) return ans;
            for(int x=col_start;x<=col_end;x++) ans.push_back(matrix[row_start][x]);
            row_start++;
            if(ans.size() == m*n) return ans;
            for(int x=row_start;x<=row_end;x++) ans.push_back(matrix[x][col_end]);
            col_end--;
            if(ans.size() == m*n) return ans;
            for(int x=col_end;x>=col_start;x--) ans.push_back(matrix[row_end][x]);
            row_end--;
            if(ans.size() == m*n) return ans;
            for(int x=row_end;x>=row_start;x--) ans.push_back(matrix[x][col_start]);
            col_start++;
        }
    }
};