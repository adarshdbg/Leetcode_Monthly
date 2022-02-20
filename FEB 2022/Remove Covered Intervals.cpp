class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
            return 1;
        sort(intervals.begin(),intervals.end(),[&](vector<int>&a,vector<int>&b){
            if(a[0]==b[0])
                return a[1]>b[1];
            
            return a[0]<b[0];
        });
        int ans=0,i=0,j=1;
        while(j<intervals.size())
        {
           // cout<<"{"<<intervals[j][0]<<","<<intervals[j][1]<<"}";
            if(intervals[j][0]>=intervals[i][0] && intervals[j][1]<=intervals[i][1])
            {
                j++;
            }
            else
            {
                ans++;
                i=j;
                j++;
            }
           // cout<<ans<<" ";
        }
        
        return ans+1;
    }
};