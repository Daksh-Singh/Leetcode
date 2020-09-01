class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num < 4 and num > 1:
            return False;
        elif num == 1: return True
        else:
            low = 1
            high = num
            while low <= high:
                mid = low + int((high - low) / 2)
                if mid*mid == num:
                    return True
                elif mid*mid > num : high = mid-1
                elif mid*mid < num : low = mid + 1
            return False