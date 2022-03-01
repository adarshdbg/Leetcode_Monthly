class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            ans.push_back(1+ans[i-pow(2,(int)log2(i))]);;
            
        }
        
        return ans;
    }
};