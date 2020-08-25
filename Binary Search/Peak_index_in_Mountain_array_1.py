class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        l = 0
        h = len(nums) - 1
        while (l + 1) < h: 
            mid = l + int((h - l) / 2)
            if nums[mid - 1] > nums[mid + 1]:
                h = mid
            else:    
                l = mid
        if nums[l] > nums[h]:
            return l
        else:
            return h
        