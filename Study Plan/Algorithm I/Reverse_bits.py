class Solution:
    def reverseBits(self, n: int) -> int:
        return sum([ ((n >> i - 1) & 1) << (32 - i) for i in range(1, 33) ])
        