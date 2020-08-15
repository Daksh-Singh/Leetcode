class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        arr = []
        for i in range(len(heights)):
            arr.append(heights[i])
        heights.sort()
        flag = 0
        for i in range(len(heights)):
            if arr[i] != heights[i]:
                flag += 1
        return flag
        