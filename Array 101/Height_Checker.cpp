class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int arr[heights.size()];
        for(int i = 0;i<heights.size();i++)
        {
            arr[i]=heights[i];
        }
        sort(heights.begin(),heights.end());
        int flag=0;
        for(int j=0;j<heights.size();j++)
        {
            if(arr[j]!=heights[j])
                flag++;
        }
        return flag;
    }
};