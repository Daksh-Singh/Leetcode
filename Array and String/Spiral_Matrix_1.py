class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) ==0:
            return matrix
        if len(matrix) ==1:
            return matrix[0]
        
        length=len(matrix[0])
        height=len(matrix)
        jump=0 
        result=[]
        n=length*height
        
        while len(result)<n:
        
            for i in range(jump, length-jump):
                if len(result)<n: 
                    result.append(matrix[jump][i])
                
            for j in range(jump+1, height-jump):
                if len(result)<n:
                    result.append(matrix[j][length-jump-1])
                
            for k in range(length-jump-2, jump, -1):
                if len(result)<n:
                    result.append(matrix[height-jump-1][k])
                
            for m in range(height-jump-1, jump, -1):
                if len(result)<n:
                    result.append(matrix[m][jump])
                
            jump+=1
                
        return result  