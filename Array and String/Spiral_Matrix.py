class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) == 0 or len(matrix[0])==0: return []
        m = len(matrix)
        n = len(matrix[0])
        T = 0
        B = m-1
        L = 0
        R = n-1
        direc = 0
        result = []
        
        while(T <=B and L <= R):
            if direc == 0:
                for k in range(L,R+1):
                    result.append(matrix[T][k])
                T=T+1
                direc = 1     
            elif direc == 1:
                for k in range(T,B+1):
                    result.append(matrix[k][R])
                R=R-1
                direc = 2
            elif direc == 2:
                for k in range(R,L-1,-1):
                    result.append(matrix[B][k])
                B=B-1
                direc = 3
            elif direc == 3:
                for k in range(B,T-1,-1):
                    result.append(matrix[k][L])
                L=L+1
                direc = 0
                
        return result     
