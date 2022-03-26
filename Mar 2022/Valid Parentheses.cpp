class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,char>m;
        m[')']='(';
        m[']']='[';
        m['}']='{';
        int i=0;
        while(i<s.size())
        {
            if(st.empty())
                st.push(s[i++]);
            else
            {
                
                if(m.find(s[i])!=m.end() && m[s[i]]==st.top())
                {
                    
                    st.pop();
                    i++;
                }
                else
                    st.push(s[i++]);
            }
            
        }
        
        
        return st.empty();
    }
};