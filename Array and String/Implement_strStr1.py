class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        len_needle = len(needle)
        len_haystack = len(haystack)
        if len_needle == 0:
            return 0
        else:
            for i in range(0,len_haystack-len_needle+1):
                if needle[0] == haystack[i]:
                    if needle == haystack[i:i+len_needle]:
                        return i
            return -1