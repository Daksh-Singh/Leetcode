class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); 
        vector<int> res;
        
        if(nums.size() <= 1)
            return;
        
        int temp = nums[0];
        int counter = 0; 
        int index = 0;
        int start_index = 0;
        while(counter < nums.size())
        {
            counter ++; 
            index += k;

            if(index >= nums.size())
                index -= nums.size();

            int curr = nums[index];
     
            nums[index] = temp;
            temp = curr;
            if(index == start_index) 
            {
                index ++; 
                if (index >= nums.size()) 
                    index -= nums.size();
                temp = nums[index];
                start_index = index;
            }
        } 
    }
};