class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(),costs.end(),[](vector<int>&a,vector<int>&b){
            return a[0]-a[1]<=b[0]-b[1];
        });
        // for(auto&i:costs)
        //         cout<<"{"<<i[0]<<","<<i[1]<<"}";
        int i=0,j=costs.size()-1;
        int ans=0;
        while(i<j)
        {
            ans+=(costs[i++][0]+costs[j--][1]);
        }

        return ans;
    }
};