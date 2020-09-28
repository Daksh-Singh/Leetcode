class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
       map<int, vector<int>> M;
        vector<int> ans;
        int m = matrix.size();
        if (!m) return {};
        int n = matrix[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                M[i+j].emplace_back(matrix[i][j]);
        for (auto &iter : M) {
            if (iter.first % 2 == 0) reverse(iter.second.begin(), iter.second.end());
            for (auto &it : iter.second) 
                ans.emplace_back(it);
        }
        return ans;
    }
};