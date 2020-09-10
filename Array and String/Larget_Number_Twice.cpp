class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = 0;
        int index = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(max1<nums[i])
            {
                max1 = nums[i];
                index = i;
            }
        }
        int flag = 0;
        for(int i = 0; i<nums.size(); i++)
            if(2*nums[i] <= max1)
                flag++;
        if(flag == nums.size()-1)
            return index;
        else
            return -1;
    }
};