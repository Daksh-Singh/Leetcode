class Solution:
    def mySqrt(self, x: int) -> int:
        if x<2:
            return x;
        else:
            low = 1
            high = x
            while low <= high:
                mid = low + int((high - low) / 2)
                if mid*mid == x:
                    return mid
                elif mid*mid > x : high = mid-1
                elif mid*mid < x : low = mid + 1
            return low-1