class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_val=0;
        int ans=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            max_val+=(prices[i+1]-prices[i]);
            ans=max(ans,max_val);
           // cout<<max_val<<" ";
            if(max_val<=0)
                max_val=0;
        }
        
        return ans;
    }
};