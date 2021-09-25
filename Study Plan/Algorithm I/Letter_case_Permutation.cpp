class Solution {
public:
    vector<string> ans;
    void solve(string s, string str, int index, int n){
        if(str.size() == (n + 1)){
            ans.push_back(str);
            return;
        }
        int i = index;
        while(i <= n){
            if(isalpha(s[i])){
                str.push_back(tolower(s[i]));
            }
            else{
                str.push_back(s[i]);
            }
            solve(s, str, i + 1, n);
            if(isalpha(str[str.size() - 1])){
                str[str.size() - 1] = toupper(str[str.size() - 1]);
            }
            else{
                return;
            }
            i ++;
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        int n = s.size();
        string str = "";
        solve(s, str, 0, n);
        return ans;
    }
};