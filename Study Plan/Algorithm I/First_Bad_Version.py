# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        low, high = 1, n
        result = 1
        while low <= high:
            mid = low + (high - low) // 2
            if isBadVersion(mid):
                result = mid
                high = mid - 1;
            else:
                low = mid + 1
        return result
            
        