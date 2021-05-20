class Solution {
public:
    int fib(int n) {
        if (n < 2)
            return n;
        if (n == 2)
            return 1;
        int c = 0;
        int a = 1;
        int b = 1;
        for(int i = 3; i < n + 1; i ++)
        {
            c = a + b;
            b = a;
            a = c;
        }
        return c;
    }
};