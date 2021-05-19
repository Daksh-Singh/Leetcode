class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        vector<int> l;
        l.push_back(1);
        v.push_back(l);
        l.push_back(1);
        v.push_back(l);
        for(int i = 1;i<rowIndex;i++)
        {
            vector<int>l1;
            l1.push_back(1);
            for(int j = 0; j<v[i].size()-1;j++)
                l1.push_back(v[i][j] + v[i][j+1]);
            l1.push_back(1);
            v.push_back(l1);
        }
        return v[rowIndex];
    }
};