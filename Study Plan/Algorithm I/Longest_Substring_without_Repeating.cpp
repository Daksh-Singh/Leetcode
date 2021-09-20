class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j, N = s.size(), result = 0;
        int A[128] = {0}; 
        for(j = 0; j < N; j ++){
            i = max(i, A[s[j]]);
            result = max(result, j - i + 1);
            A[s[j]] = j + 1;
        }
        return result;
    }
};