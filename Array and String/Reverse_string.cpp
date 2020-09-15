class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        for(int i = 0, j = s.size()-1; j > i; i++, j--)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] =  temp;
        }
    }
};