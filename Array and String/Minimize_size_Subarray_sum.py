class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        n = len(nums)
        if n == 0:
            return 0
        ans = 100000000
        sums = list()
        sums.append(nums[0])
        for i in range(1,n):
            sums.append(sums[i - 1] + nums[i])
        for i in range(n):
            for j in range(i,n):
                sum1 = sums[j] - sums[i] + nums[i]
                if sum1 >= s:
                    ans = min(ans, (j - i + 1))
                    break
        if ans != 100000000:
            return ans
        else: return 0
