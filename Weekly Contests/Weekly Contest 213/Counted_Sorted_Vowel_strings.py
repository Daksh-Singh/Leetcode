from itertools import combinations 
class Solution:
    def countVowelStrings(self, n: int) -> int:
        comb = combinations_with_replacement(['a', 'e', 'i', 'o', 'u'], n)
        l = len(list(comb))
        return l