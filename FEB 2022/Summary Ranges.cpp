class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        if(nums.size()==1)
            return {to_string(nums[0])};
        vector<string>v;
        int p=nums[0],q=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                q=nums[i];
                if(i==nums.size()-1)
                {
                    v.push_back(to_string(p)+"->"+to_string(q));
                }
            }
            else
            {
                if(p!=q)
                    v.push_back(to_string(p)+"->"+to_string(q));
                else
                    v.push_back(to_string(p));
                p=nums[i];
                q=nums[i];
                if(i==nums.size()-1)
                {
                    v.push_back(to_string(p));
                }
            }
        }
        return v;
        
    }
};