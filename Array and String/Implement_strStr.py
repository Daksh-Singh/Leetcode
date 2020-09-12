class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(needle) == 0:
            return 0
        else:
            l =len(needle)
            for i in range(len(haystack)):
                if needle[0] == haystack[i]:
                    if needle == haystack[i:i+l]:
                        return i
            return -1