class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = nums[0];
        int l = -2147483648;
        int smax = l;
        int tmax = l;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                tmax = smax;
                smax = max;
                max = nums[i];
            }
            else if(nums[i]<max && nums[i]>smax)
            {
                tmax = smax;
                smax = nums[i];
            }
            else if(nums[i]<smax && nums[i]>tmax)
            {
                tmax = nums[i];
            }
        }
        std::vector<int>::iterator it;
        it = std::find (nums.begin(), nums.end(), l); 
        if(tmax==smax)
            return max;
        else if(tmax==l && it!=nums.end())
            return tmax;
        else if(tmax==l)
            return max;
        else
            return tmax;
    }
};
