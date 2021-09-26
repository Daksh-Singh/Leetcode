class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0,curr = nums[0];
        for(int i = 1; i < nums.size(); i ++)
        {
            prev = max(prev + nums[i], curr);
            swap(prev,curr);
        }
        return curr;   
    }
};