class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1 && k == 1)
            return 0;
        int midterm = pow(2, n - 1) / 2;
        if(k <= midterm)
            return kthGrammar(n - 1, k);
        else 
            return !kthGrammar(n - 1, abs(k - midterm));        
    }
};