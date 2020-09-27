#include <boost/algorithm/string.hpp>
class Solution {
public:
    string reverseWords(string s) {
        vector<string> result; 
        boost::split(result, s, boost::is_any_of(" "));
        reverse(result.begin(), result.end()); 
        string st;
        st = accumulate(begin(result), end(result), s);
        return s;
    }
};