class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        counter = {} 
        for i in range(len(arr)):
            if arr[i] in counter:
                return True
            counter[arr[i]*2]=1 
            if arr[i]%2==0:
                  counter[arr[i]//2]=1
        return False