class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        i = 0
        sum1 = 0
        while i<len(nums):
            sum1 += nums[i]
            i+=2
        return sum1
            
        