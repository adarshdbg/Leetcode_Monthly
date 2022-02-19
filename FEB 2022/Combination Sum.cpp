class Solution {
public:
    vector<vector<int>>ans;
     vector<int>ans1;
    void total_value(vector<int>& candidates, int &target,int &sum,int i,int& n)
    {
        if(sum==target)
        {
            ans.push_back(ans1);
            return;
        }
        for(int j=i;j<n;j++)
        {
            if(sum+candidates[j]<=target)
            {
               ans1.push_back(candidates[j]);
                sum+=candidates[j]; 
                total_value(candidates,target,sum,j,n);
                 sum-=candidates[j]; 
                ans1.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       int sum=0;
        int n=candidates.size();
        total_value(candidates,target,sum,0,n);
        return ans;
        
    }
};