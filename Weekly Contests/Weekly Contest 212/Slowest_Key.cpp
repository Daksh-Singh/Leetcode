class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int> res;
        res.push_back(releaseTimes[0]);
        for(int i = 1; i < releaseTimes.size(); i++)
        {
            res.push_back(releaseTimes[i] - releaseTimes[i-1]);
        }
        int max = *max_element(res.begin(),res.end());
        int arr[releaseTimes.size()-1];
        int k = 0;
        for(int i = 0; i < keysPressed.size(); i++)
        {
            if(res[i] == max)
            {
                arr[k] = keysPressed[i];
                k++;
            }
        }
        sort(arr, arr + k);
        return arr[k-1];
    }
};