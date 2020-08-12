class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        last=0
        i=0
        while(i<len(nums)):
            if nums[i]!=0:
                nums[last]=nums[i];
                last+=1
            i+=1
        for i in range(last,len(nums)):
            nums[i]=0;