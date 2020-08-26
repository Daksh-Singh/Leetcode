class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int startIndex = -1;
        while(left <= right){
        
        int middle = left + (right - left)/2;
        if(nums[middle] == target){
            startIndex = middle;
            right = middle - 1;
        }
        else if(target > nums[middle])
            left = middle + 1;
        else
            right = middle - 1;
        }
        if(startIndex == -1) return {-1, -1};
        left = startIndex;
        right = nums.size() - 1;
        int endIndex = -1;
        while(left <= right){
        
        int middle = left + (right - left)/2;
        if(nums[middle] == target){
            endIndex = middle;
            left = middle + 1;
        }
        else if(target > nums[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return {startIndex, endIndex};
}
        
};