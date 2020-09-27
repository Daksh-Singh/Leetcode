class Solution:
    def reverseWords(self, s: str) -> str: 
        s1 = []
        for i in s.split(" "):
            if i == "":
                continue
            else:
                s1.append(i)
        s1.reverse()
        return " ".join(s1)