class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        N = len(nums)
        result = []
        arr = []
        for i in range(N+1):
            arr.append(0)
        for j in range(N):
            arr[nums[j]]+=1
        for k in range(1,N+1):
            if arr[k] == 0:
                result.append(k)
        return result
        
        