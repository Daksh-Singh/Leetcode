class Solution {
    private:
    void compute(int i, int n, int k, vector<int> &curr, vector<vector<int>> &res) {
        
        if (curr.size() == k) {
            res.push_back(curr);
            return;
        }
        
        if (i > n) return;
        
        curr.push_back(i);
		
        compute(i + 1, n, k, curr, res);
		
        curr.pop_back();
        
        compute(i + 1, n, k, curr, res);
    }
    
public:
    vector<vector<int>> combine(int n, int k) {        
        vector<int> curr;
        vector<vector<int>> res;
        
        compute(1, n, k, curr, res);
        
        return res;
    }
};