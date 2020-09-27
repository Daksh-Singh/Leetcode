class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split(" ")
        s1 = []
        for word in l:
            s1.append(word[::-1])
        return " ".join(s1)