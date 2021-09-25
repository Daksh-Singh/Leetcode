class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        if (!nums.size())
            return result;
        
        backtrack(nums, result, 0);
        
        return result;
    }
    
    void backtrack(vector<int> nums, vector<vector<int>>& result, int first) {
        if (first == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        for (int i = first; i < nums.size(); i ++) {
            if (first != i)
                swap(nums[first], nums[i]);
            
            backtrack(nums, result, first + 1);
        }
    }
};