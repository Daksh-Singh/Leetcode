class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot;
        int low = 0, high = nums.size() - 1;
        while (low <= high) 
        {
            pivot = low + (high - low) / 2;
            if (nums[pivot] == target) 
                return pivot;
            if (target < nums[pivot]) high = pivot - 1;
            else low = pivot + 1;
        }
    return -1;
    }
};