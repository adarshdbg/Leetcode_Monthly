class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(m+1,INT_MAX));
        
        vector<int>prefix(n+1,0);
        
        for(int i=1;i<n+1;i++)
        {
            prefix[i]+=(prefix[i-1]+nums[i-1]);
        }
        for(int i=0;i<n;i++)
            dp[i][1]=prefix[i+1];
        dp[0][0]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                for(int k=0;k<i;k++)
                {
                    dp[i][j]=min(dp[i][j],max(dp[k][j-1],prefix[i+1] - prefix[k+1]));
                }
            }
        }
        
        return dp[n-1][m];
    }
};