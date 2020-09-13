class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        arr = []
        if numRows == 0:
            return arr
        elif numRows == 1:
            arr.append([1])
            return arr
        else:
            arr.append([1])
            arr.append([1,1])
            for i in range(1,numRows-1):
                l = []
                l.append(1)
                for j in range(len(arr[i])-1):
                    l.append(arr[i][j]+arr[i][j+1])
                l.append(1)
                arr.append(l)
            return arr