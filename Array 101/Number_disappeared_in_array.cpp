class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int N = nums.size();
        vector<int> result;
        int arr[N+1];
        for(int i=0;i<N+1;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        
        for(int i=1;i<N+1;i++)
        {
            if(arr[i]==0)
             result.push_back(i);
        }
       return result;
    }
};
