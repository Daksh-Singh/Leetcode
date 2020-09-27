class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        int now=0;
        string ret;
        int n = s.length();
        int i=0;
        while(i<n)
        {
            if(isspace(s[i]))
            {
                if(now>0)
                    ret+=' ';
                while(!st.empty())
                {
                    char c = st.top();
                    st.pop();
                    ret+=c;
                }
                now++;
            }
            if(!isspace(s[i]))
                st.push(s[i]);
            i++;
        }
        if(now>0)
            ret+=' ';
        while(!st.empty())
        {
            char c = st.top();
            st.pop();
            ret+=c;
        }
        return ret;
    }
};