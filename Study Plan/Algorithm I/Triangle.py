class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        for line in range(len(triangle) - 1, 0, -1):
            for i in range(line):
                triangle[line-1][i] += min(triangle[line][i], triangle[line][i+1])
        
        return triangle[0][0]