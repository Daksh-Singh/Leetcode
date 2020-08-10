class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int N=A.size();
        if(N<3)
        {
            return false;
        }
        else
        {   
            int i=0;
            while(i+1<N && A[i]<A[i+1])
                i++;
            if(i==0||i==N-1)
                return false;
            while(i+1<N && A[i]>A[i+1])
                i++;
            return i == N-1;
        }
    }
};