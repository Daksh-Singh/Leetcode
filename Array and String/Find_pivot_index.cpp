class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0;i < nums.size();i++)
        {
            for(int j = 0; j < i;j++)
            {
                sum1+=nums[j];
            }
            for(int k = nums.size()-1; k > i; k--)
            {
                sum2+=nums[k];
            }
            if(sum1 == sum2)
                return i;
            sum1 = sum2 = 0;
        }
       return -1; 
    }
};