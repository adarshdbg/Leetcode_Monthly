class Solution {
public:
    
    bool dfs(vector<int>&vis,int i,int j,vector<vector<int>>& graph)
    {
        if(j==-1)
        {
            vis[i]=1;
        }
        else if(vis[j]==1)
            vis[i]=2;
        else
            vis[i]=1;
        
        for(auto& k:graph[i])
        {
            if(vis[k]==0)
            {
                if(dfs(vis,k,i,graph)==false) 
                    return false;
            }
            else if(vis[i]==vis[k])
                return false;
        }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>vis(n,0);
        
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0 && !dfs(vis,i,-1,graph))
            {
                 return false;
            }
        }
        
        return true;
       
        
    }
};