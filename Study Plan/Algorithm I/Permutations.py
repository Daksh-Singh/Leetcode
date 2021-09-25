class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def backtrack(nums, arr):
            if len(arr) == len(nums):
                answer.append(arr)
                return
            for num in nums:
                if num not in visited:
                    visited.add(num)
                    backtrack(nums, arr + [num])
                    visited.remove(num)
                    
            
        answer = []
        visited = set()
        backtrack(nums, [])
        return answer