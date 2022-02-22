class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,count=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                ans=nums[i];
            }
            count+=ans==nums[i]?1:-1;
        }
        
        return ans;
    }
};