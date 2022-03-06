class Solution {
public:
    int countOrders(int n) {
        vector<long long int>dp(n+1,0);
        int mod=1e9+7;
    
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=((((2*i - 1)*i)%mod)*(dp[i-1]%mod))%mod;
        
        return dp[n];
    }
};

class Solution {
public:
    int countOrders(int n) {
        int mod=1e9+7;
        long long int prev=1;
        int ans=1;
        for(int i=2;i<=n;i++)
            ans=((((2*i - 1)*i)%mod)*(prev%mod))%mod,prev=ans;
        
        return ans;
    }
};