class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int flag = 0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j]==2*arr[i] && i!=j)
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag>0)
            return true;
        else
            return false;
    }
};