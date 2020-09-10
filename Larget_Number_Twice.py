class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        max1 = 0
        index = 0
        for i in range(len(nums)):
            if max1 < nums[i]:
                max1 = nums[i]
                index = i
        flag = 0
        for i in nums:
            if 2*i <= max1:
                flag+=1
        if flag == len(nums)-1:
            return index
        else:
            return -1
                