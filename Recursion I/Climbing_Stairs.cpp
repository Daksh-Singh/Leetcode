class Solution {
public:
    vector<int> steps = vector<int> (46,-1);
    
    int climbStairs(int n) {
        if(n <= 1) return 1; 
        if(steps[n] == -1)
            steps[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return steps[n];
    }
};