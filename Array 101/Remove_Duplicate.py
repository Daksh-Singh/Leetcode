class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=1
        size=len(nums)
        while i<size:
            if nums[i-1]==nums[i]:
                nums.remove(nums[i])
                size-=1
            else:
                i+=1
        return size