class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N = nums.size(), i = 0, j = 1;
        while(i < N && j < N)
        {
                if(nums[i] == 0 && nums[j] == 0)
                {
                         j ++;
                        continue;
                }
                else if(nums[i] == 0 && nums[j] != 0)
                        swap(nums[i], nums[j]);
                i ++;
                j ++;
        }
    }
};