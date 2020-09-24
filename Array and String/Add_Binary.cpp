class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        for(int i=a.size()-1, j=b.size()-1, carry=0; i>=0 || j>=0 || carry; i--, j--, carry/=10) {
            int ni = i>=0?a[i]-'0':0;
            int nj = j>=0?b[j]-'0':0;
            int r = 00;
            if(ni&&nj)
                r=10;
            else if(ni^nj)
                r=01;
            if(carry) {
                if(r==01)
                    r=10;
                else
                    r+=01;
            }
            s = to_string(r%10) + s;
            carry = r;
        }
        return s;
    }
};