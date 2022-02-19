class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=nums.size();
        int n=nums.size();
        if(n<3)
            return n;
       for(int i=2;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1] && nums[i]==nums[i-2])
                nums[i-2]=INT_MAX,ans--;
        }
        int i=0;
        int j=0;
        while(i<n && j<n)
        {
            if(ans==n) 
                return ans;
            else
            {
                if(nums[i]==INT_MAX)
                {
                    if(j<n &&  nums[j]==INT_MAX)
                        j++;
                    else
                    {  
                        int t=nums[i];
                        nums[i]=nums[j]; 
                        nums[j]=t; 
                        i++; 
                        j++;
                    }
                }
                else
                {
                    i++,j++;
                }
                    
            }
        }

       return ans;
    }
};