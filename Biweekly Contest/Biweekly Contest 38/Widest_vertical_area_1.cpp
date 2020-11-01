class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        priority_queue<int>p;
        for(int i = 0; i < points.size(); i++)
            p.push(points[i][0]);
        int max=-1;
        int a=p.top();
        while(!p.empty())
        {
            p.pop();
            if(!p.empty())
            {
                  int b=p.top();
                  if(abs(a-b)>max) max=abs(a-b);
                  a=b;
            }
        }
        return max;
    }
};