class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if(n == 1 and k == 1):
            return 0
        midterm = pow(2, n - 1) / 2
        if(k <= midterm):
            return self.kthGrammar(n - 1, k)
        else: 
            if self.kthGrammar(n - 1, abs(k - midterm)) == 0:
                return 1
            else: return 0
        