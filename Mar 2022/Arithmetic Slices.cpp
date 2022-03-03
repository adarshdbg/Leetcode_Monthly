class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int ans=0,count=0;
        
        int dif=nums[1]-nums[0];
        
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==dif)
                count++;
            else
            {
                ans+=((count)*(count+1)/2);
                count=0;
                dif=nums[i]-nums[i-1];
            }
        }
        ans+=((count)*(count+1)/2);
        return ans;
    }
};