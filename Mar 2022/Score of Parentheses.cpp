class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        int ans=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='(')
                st.push(0);
           else
           {
               int p=st.top();
               st.pop();
               int q=st.top();
               st.pop();
               
               st.push(q+max(2*p,1));
           }
            i++;
        }
        return st.top();
        
    }
};

class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0,count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                count++;
            else
            {
                count--;
                if(s[i-1]=='(')
                    ans+=pow(2,count);
            }
            
        }
        return ans;
        
    }
};