class Solution {
public:
    string returnString(string &s)
    {
        string ans="";
        int count=0,j=s.size()-1;
        while(j>=0)
        {
            if(s[j]=='#')
                count++,j--;
            else
            {
                if(count>0)
                {
                    count--;
                    j--;
                }
                else
                {
                    ans+=s[j--];
                }
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
       // cout<<returnString(s)<<" "<<returnString(t);
        return returnString(s)==returnString(t);
    }
};