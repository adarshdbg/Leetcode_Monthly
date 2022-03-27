class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=mat.size()-1;i>=0;i--)
        {
            int ans=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    ans++;
                else 
                    break;
            }
            if(pq.size()==k && pq.top().first>=ans)
            {
                pq.pop();
                pq.push({ans,i});
            }
            else if(pq.size()<k)
                pq.push({ans,i});
                
        }
       // cout<<pq.size()<<" ";
        vector<int>ans;
        while(!pq.empty())
            ans.push_back(pq.top().second),pq.pop();
        
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};