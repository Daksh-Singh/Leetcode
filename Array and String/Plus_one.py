class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        st = ""
        for i in digits:
            st+=str(i)
        st = str(int(st)+1)
        digits = [int(char) for char in st]
        return digits