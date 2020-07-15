class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        A=[i*i for i in A]
        A.sort()
        return A