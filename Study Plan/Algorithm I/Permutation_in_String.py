class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        for i in range(len(s2) - len(s1) + 1):
            counts = set(s1)
            match = True
            for c in counts:
                if s2[i:i + len(s1)].count(c) != s1.count(c):
                    match = False
                    break
            if match: return True
            
        return False
        