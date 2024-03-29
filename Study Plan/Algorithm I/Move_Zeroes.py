class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        N = len(nums) 
        i, j = 0, 1
        while(i < N and j < N):
            if(nums[i] == 0 and nums[j] == 0):
                j += 1
                continue
            elif(nums[i] == 0 and nums[j] != 0):
                nums[i], nums[j] = nums[j], nums[i]
            i += 1
            j += 1

        