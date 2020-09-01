class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 4 && num>1)
            return false;
        else if(num == 1)
            return true;
        else
        {
            long mid;
            int low = 1, high = num;
            while (low <= high) 
            {
                mid = low + (high - low) / 2;
                if (mid*mid == num) 
                    return true;
                else if (mid*mid > num) high = mid-1;
                else if (mid*mid < num) low = mid + 1;
            }
            return false;
        }
        
    }
};
