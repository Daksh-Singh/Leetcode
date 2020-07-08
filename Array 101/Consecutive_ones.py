class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max1,count=0,0
        for i in range(len(nums)):
            if nums[i]==0:
                count=0
            else:
                count+=1
                if count>max1: max1=count
        return max1