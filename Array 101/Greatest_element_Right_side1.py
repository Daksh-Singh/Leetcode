class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        last=-1;
        temp=0;
        i=(len(arr)-1)
        while(i>=0):
            temp=arr[i]
            arr[i]=last
            if last<temp:
                last=temp
            i-=1
        return arr