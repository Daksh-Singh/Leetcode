class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if not nums:
            return [-1, -1]
        l, r = 0, len(nums) - 1
        while l <= r:
            m = (l + r) // 2
            if target < nums[m]:
                r = m - 1
            elif target > nums[m]:
                l = m + 1
            else:
                upper = self.upper_bound(nums, m, r)
                lower = self.lower_bound(nums, l, m)
                return [lower, upper]
        return [-1, -1]
        
        
    def upper_bound(self, nums: List[int], l: int, r: int) -> int:
        while l < r:
            m = (l + r) // 2
            if nums[m] > nums[l]:
                r = m - 1
            elif nums[m] == nums[m + 1]:
                l = m + 1
            else:
                return m
        return l
    
    def lower_bound(self, nums: List[int], l: int, r: int) -> int:
        while l < r:
            m = (l + r) // 2
            if nums[m] < nums[r]:
                l = m + 1
            elif nums[m] == nums[m - 1]:
                r = m - 1
            else:
                return m
        return l