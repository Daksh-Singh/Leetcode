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
        if n == 0:
            return -1

        left = 1
        right = n
        while left <= right:
            mid = left + int((right - left) / 2)
            if isBadVersion(mid) == False:
                left = mid +1 
            elif isBadVersion(mid) == True:
                right = mid -1 ;
        return left
        if left != n and isBadVersion(left) == True:
            return left;
        return -1;
        