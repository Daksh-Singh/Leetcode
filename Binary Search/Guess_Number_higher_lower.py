# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        mid = 0
        low = 1
        high = n
        while low <= high: 
            mid = low + int((high - low) / 2)
            if guess(mid) == 0:
                return mid
            elif guess(mid) == -1: high = mid - 1
            elif guess(mid) == 1: low = mid + 1
        return mid