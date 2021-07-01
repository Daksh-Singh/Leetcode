class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0], min1 = nums[1];
        int max = nums[nums.size() - 1], max1 = nums[nums.size() - 2];
        return ((max * max1) - (min * min1));
    }
};