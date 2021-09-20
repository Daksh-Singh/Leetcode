class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = set()
        result = 0
        start = 0
        for i in range(len(s)):
            while s[i] in seen:
                seen.remove(s[start])
                start += 1
            seen.add(s[i])
            result = max(result, i - start + 1)
        return result
        