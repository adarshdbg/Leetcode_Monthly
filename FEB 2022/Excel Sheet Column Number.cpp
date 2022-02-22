class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int n=columnTitle.size();
        for(int i=0;i<n;i++)
        {
            ans+=(pow(26,n-i-1)*(columnTitle[i]-'A'+1));
        }
        return ans;
    }
};