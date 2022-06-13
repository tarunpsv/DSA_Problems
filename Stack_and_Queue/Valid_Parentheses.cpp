class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1)
        {
            return 0;
        }
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if((st.empty()) && ((s[i]==')') || (s[i]=='}') || (s[i]==']')))
            {
                return 0;
            }
            else if((s[i]=='(') || (s[i]=='{') || (s[i]=='['))
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    return 0;
                }
            }
            else if(s[i]=='}')
            {
                if(st.top()=='{')
                {
                    st.pop();
                }
                else
                {
                    return 0;
                }
            }
            else if(s[i]==']')
            {
                if(st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
        if(st.empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
