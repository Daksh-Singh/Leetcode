class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0, len = nums.size(), end = len - 1;
        vector<int> result(len);
        while(start <= end)
        {
            if(abs(nums[start]) > abs(nums[end]))
            {
                result[len - 1] = nums[start] * nums[start];
                start ++;
            }
            else
            {
                result[len - 1] = nums[end] * nums[end];
                end --;
            }
            len --;
        }
        return result; 
    }
};