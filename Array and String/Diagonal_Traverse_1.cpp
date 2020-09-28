class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& M) {
        vector<int> ans;
        int n=M.size(); if(n==0) return ans;
        int m=M[0].size();if(m==0) return ans;
        
        int i=0,j=0;
        bool flg=true;
        while(ans.size()<n*m)
        {
            ans.push_back(M[i][j]);
            if(flg)
            {
                i--,j++;
                if(i<0 and j>=m) i+=2,j--,flg=false;
                else if(i<0) i++,flg=false;
                else if(j>=m) j-=1,i+=2,flg=false;
            }
            else
            {
                i++,j--;
                if(j<0 and i>=n) j+=2,i--,flg=true;
                else if(j<0) j++,flg=true;
                else if(i>=n) i--,j+=2,flg=true;
            }
        }
        return ans;
    }
};