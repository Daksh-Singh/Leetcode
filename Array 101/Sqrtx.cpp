class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        else
        {
            long mid;
            int low = 1, high = x;
            while (low <= high) 
            {
                mid = low + (high - low) / 2;
                if (mid*mid == x) 
                    return mid;
                else if (mid*mid > x) high = mid-1;
                else if (mid*mid < x) low = mid + 1;
            }
            return low-1;
        }
        
    }
};