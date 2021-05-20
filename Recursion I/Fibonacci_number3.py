class Solution:
    def fib(self, n: int) -> int:
        if (n < 2):
            return n
        if (n == 2):
            return 1
        c = 0
        a = 1
        b = 1
        for i in range(3, n + 1):
            c = a + b
            b = a
            a = c
        return c
