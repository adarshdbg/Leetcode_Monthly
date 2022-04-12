class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        
        for(auto &i:nums)
            m[i]++;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(auto &i:m)
        {
            if(pq.size()<k)
                pq.push({m[i.first],i.first});
            else
            {
                if(pq.top().first<m[i.first])
                {
                    pq.pop();
                    pq.push({m[i.first],i.first});
                }
                    
                    
            }
        }
        vector<int>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};