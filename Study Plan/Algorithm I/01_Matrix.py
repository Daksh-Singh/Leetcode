class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        m = len(mat)
        n = len(mat[0])
        MAX = 1000000
        for i in range(m):
            for j in range(n):
                if mat[i][j] != 0:
                    if (i - 1) >= 0:
                        top = mat[i - 1][j]
                    else:
                        top = MAX
                    
                    if (j - 1) >= 0:
                        left = mat[i][j - 1]
                    else:
                        left = MAX
                    mat[i][j] = 1 + min(top, left)
        
        for i in range(m - 1 ,-1, -1):
            for j in range(n - 1, -1, -1):
                if mat[i][j] != 0:
                    if (i + 1) < m:
                        bottom = mat[i + 1][j]
                    else:
                        bottom = MAX
                    
                    if (j + 1)< n:
                        right = mat[i][j + 1]
                    else:
                        right = MAX
                    mat[i][j] = min(mat[i][j], 1 + min(bottom, right))
        
        return mat