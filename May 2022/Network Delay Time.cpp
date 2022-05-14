class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        
        q.push({0,k});
        
        unordered_map<int,vector<pair<int,int>>>m;
        
        for(auto& i:times)
            m[i[0]].push_back({i[2],i[1]});
        
        
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        
        while(!q.empty())
        {
            auto top=q.top();
            //cout<<"{"<<top.first<<" "<<top.second<<"}";
            q.pop();
            
            for(auto &j:m[top.second])
            {
                if(dist[top.second]+j.first<dist[j.second])
                {
                    dist[j.second]=dist[top.second]+j.first;
                    q.push({dist[j.second],j.second});
                }
                   
            }
        }
        // for(auto &i:dist)
        //     cout<<i<<" ";
        int maxx=*max_element(dist.begin()+1,dist.end());
        
        return maxx==INT_MAX?-1:maxx;
    }
};