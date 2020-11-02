from collections import Counter 
class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        nums.sort(reverse = True)
        result = sorted(nums, key = nums.count, reverse = False)
        return result
        