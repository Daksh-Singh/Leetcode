class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        n = len(nums)
        ans = 100000000
        left = 0
        sum = 0
        for i in range(n):
            sum += nums[i]
            while (sum >= s):
                ans = min(ans, i + 1 - left)
                sum -= nums[left]
                left+=1

        if ans!= 100000000:
            return ans
        else: return 0