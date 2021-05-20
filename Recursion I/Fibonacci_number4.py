class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        self.cache = {0: 0, 1: 1}
        return self.memoize(n)

    def memoize(self, n: int) -> {}:
        if n in self.cache.keys():
            return self.cache[n]
        self.cache[n] = self.memoize(n - 1) + self.memoize(n - 2)
        return self.memoize(n)
