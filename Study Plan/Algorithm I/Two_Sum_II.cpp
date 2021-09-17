class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size() - 1;
        vector<int> result(2);
        int sum = 0;
        while(low <= high)
        {
            sum = numbers[low] + numbers[high];
            if(sum == target)
            {
                result[0] = low + 1;
                result[1] = high + 1;
                return result;
            }
            else if(sum < target)
                low ++;
            else
                high --;
        }
        return result;
    }
};