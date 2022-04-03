class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int p=0;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                p++;
                int a1=i+1,b1=j,a2=i,b2=j-1;
                while(a1<b1 && s[a1]==s[b1])
                    a1++,b1--;
                    
                //a=i,b=j-1;  
                while(a2<b2 && s[a2]==s[b2])
                    a2++,b2--;
                
                return a1 >= b1 || a2 >= b2;
                
            }
            i++,j--;
        }
        return p<=1;
    }
};