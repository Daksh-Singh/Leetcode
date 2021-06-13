class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int size = (right - left + 1);
        int arr[size];
        for(int i = 0; i < size; i ++)
            arr[i] = left++;
        bool flag = false;
        for(int i = 0; i < size; i ++)
        {
            for(int j = 0; j < ranges.size(); j++)
            {
                if(arr[i] >= ranges[j][0] && arr[i] <= ranges[j][1])
                {
                    flag = true;
                    break;
                }
                else
                    flag = false;
            }
            if(flag == false)
                return false;
        }
        return true;
    }
};