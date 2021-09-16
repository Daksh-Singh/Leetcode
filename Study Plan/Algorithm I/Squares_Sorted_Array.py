class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        N = len(nums)
        start, end = 0, N - 1
        result = [0] * N
        while start <= end:
            if abs(nums[start]) > abs(nums[end]):
                result[N - 1] = nums[start] * nums[start]
                start += 1
            else:
                result[N - 1] = nums[end] * nums[end]
                end -= 1
            N -= 1
        return result
        