class Solution {
public:
    vector<int> indices;
    unordered_map<int,vector<int>>m;
    string indiceString; 
    void dfs(int i,vector<bool>&vis,string& s)
    {
        vis[i]=true;
        indices.push_back(i);
        indiceString+=s[i];
        for(auto&j:m[i])
        {
            if(!vis[j])
            {
                dfs(j,vis,s);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
        
        for(auto& i:pairs)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        vector<bool>vis((int)s.size(),false);
        
        for(int i=0;i<(int)s.size();i++)
        {
            if(!vis[i])
            {
                indiceString="";
                indices.clear(); 
                dfs(i,vis,s);
                sort(indiceString.begin(),indiceString.end());
                sort(indices.begin(),indices.end());
                for(int j=0;j<indices.size();j++)
                    s[indices[j]]=indiceString[j];
                
                
            }
        }
        return s;
            
        
        
        
        
    }
};