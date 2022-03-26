class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int no_of_open=0,i=0;
        
        while(i<s.size())
        {
            if(s[i]=='(')
                no_of_open++;
            else if(s[i]==')')
            {
                if(no_of_open==0)
                    s[i]='#';
                else
                    no_of_open--;
            }
            i++;
        }
        i=s.size()-1,no_of_open=0;
         while(i>=0)
        {
            if(s[i]==')')
                no_of_open++;
            else if(s[i]=='(')
            {
                if(no_of_open==0)
                    s[i]='#';
                else
                    no_of_open--;
            }
             i--;
        }
        i=0;
        while(i<s.size())
        {
            if(s[i]!='#')
                ans+=s[i];
            i++;
        }
        
        return ans;
    }
};