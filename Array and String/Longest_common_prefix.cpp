class Solution {
public:    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0)
            return "";
        sort(strs.begin(),strs.end());
        string ans = "";
        for(int i=0;i<min(strs[0].length(),strs[n-1].length());i++)
        {
            if(strs[0][i]!=strs[n-1][i])
                break;
            ans+=strs[0][i];
        }
        return ans;
    }
};