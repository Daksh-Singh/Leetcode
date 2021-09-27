class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        if(n == 0)
            return false;
        
        while(n){
            if((n & 1) == 1 and flag)
                return false;
            
            else if((n & 1) == 1)
                flag = true;
            
            n = n>> 1;
        }
        return true;
    }
};