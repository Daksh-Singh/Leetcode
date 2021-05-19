class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        arr = []
        arr.append([1])
        arr.append([1,1])
        for i in range(1,rowIndex):
            l = []
            l.append(1)
            for j in range(len(arr[i])-1):
                l.append(arr[i][j]+arr[i][j+1])
            l.append(1)
            arr.append(l)
        return arr[rowIndex]