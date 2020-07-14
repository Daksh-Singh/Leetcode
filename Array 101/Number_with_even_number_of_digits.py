class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count=0
        flag=0
        for i in range(len(nums)):
            count=len(str(nums[i]))
            if count%2==0:
                flag+=1
            count=0
        return flag