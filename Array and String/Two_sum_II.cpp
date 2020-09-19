class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lowIndex = 0;                                                               
        int highIndex = numbers.size()-1;
        vector<int>v;
        while(lowIndex < highIndex)
        {
            int temp = numbers[lowIndex] + numbers[highIndex];                                 
                if(temp == target)
                {
                    v.push_back(lowIndex+1);
                    v.push_back(highIndex+1);
                    return v;
                }
        if(temp < target)                                                                 
            lowIndex++;
        else
            highIndex--;
        }  
        return v;
    }
};