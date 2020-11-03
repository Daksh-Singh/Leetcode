class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, int> mt;
        for(int i = 0; i < arr.size(); i++)
            mt[arr[i]] = i + 1;
        for(int i = 0; i < pieces.size(); i++)
        {
            if (pieces[i].size() == 1 && mt[pieces[i][0]] != 0)
            {
                continue;
            }
            else if (pieces[i].size() > 1 && mt[pieces[i][0]] != 0) 
            {
                int flag = mt[pieces[i][0]] - 1;
                    flag++;
                if (flag >= arr.size())
                    return false;
                for(int j = 1; j < pieces[i].size(); j++)
                {
                    if (arr[flag] == pieces[i][j]) 
                    {
                        flag++;
                        if (flag >= arr.size() && j < pieces[i].size() - 1)
                            return false;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                return false;
            }
        }
    return true;
    }
};