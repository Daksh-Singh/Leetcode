class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i=0
        curr=0
        while(curr<len(nums)):
            if nums[curr]!=0:
                nums[i],nums[curr]=nums[curr],nums[i]
                i+=1
            curr+=1
        