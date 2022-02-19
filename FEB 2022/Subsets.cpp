class Solution {
public:
    vector<vector<int>>ans;
    void total(vector<int>&v,vector<int>&nums,int i,int n)
    {
        ans.push_back(v);
        for(int j=i;j<n;j++)
        {
            v.push_back(nums[j]);
            total(v,nums,j+1,n);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        total(v,nums,0,n);
        return ans;
    }
};