// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 0)
            return -1;

        int left = 1, right = n;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(isBadVersion(mid) == false)
                left = mid +1 ;
            else if(isBadVersion(mid) == true) 
                right = mid -1 ;
        }
        return left;
        if(left != n && isBadVersion(left) == true) return left;
            return -1;
    }
};