class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> res;
        for(int i = 0; i < points.size(); i++)
            res.push_back(points[i][0]);
        sort(res.begin(), res.end());
        int diff = res[1] - res[0];
        int flag = 0;
        for(int i = 2; i < res.size(); i++)
        {
            flag = res[i] - res[i-1];
            if(flag > diff)
                diff = flag;
        }
        return diff;
    }