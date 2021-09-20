class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int> str1(26,0);
        vector<int> str2(26,0);
        for(int i = 0; i < s1.size(); i ++)
        {
            str1[s1[i] - 'a'] ++;
            str2[s2[i] - 'a'] ++;
        }
        int l = 0,r = s1.size() - 1;
        while(r < s2.size())
        {
            if(str1 == str2)
                return true;
            r ++;
            if(r != s2.size())
            str2[s2[r] - 'a'] ++;
            str2[s2[l] - 'a'] --;
            l ++;
        }
        return false;
    }
};