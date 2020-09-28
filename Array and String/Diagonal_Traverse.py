class Solution:
    def findDiagonalOrder(self, matrix: List[List[int]]) -> List[int]:
                            
        result, diag = [],  collections.defaultdict(list)
        
        for idx, i in enumerate(matrix):
            for jdx, j in enumerate(i):
                diag[idx+jdx] += [j]
                            
        for idx, row in enumerate(diag.values()):
            if idx % 2 == 0: row.reverse()
            result.extend(row)
            
        return result