class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        flag=0
        for i in range(len(nums)):
            nums[i]=len(str(nums[i]))
            if nums[i]%2==0:
                flag+=1
        return flag