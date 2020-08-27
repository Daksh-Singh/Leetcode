class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        if x <= arr[0]:
            return arr[:k]
        if x >= arr[-1]:
            return arr[-k:]
        
        i = bisect.bisect_left(arr, x)
        low = max(0, i - k - 1)
        hi = min(len(arr) - 1, i + k - 1)
        
        while hi - low > k - 1:
            if x - arr[low] <= arr[hi] - x:
                hi -= 1
            else:
                low += 1
        return arr[low:hi+1]