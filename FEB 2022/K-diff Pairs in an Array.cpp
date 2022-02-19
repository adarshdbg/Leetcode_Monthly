class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        if(k==0)
        {
            int p=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(i>0 && nums[i]==nums[i-1] && p!=nums[i])
                {
                    p=nums[i];
                    ans++;
                }
            }
            return ans;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int val=nums[i]+k;
                int j=i+1,l=n-1;
                bool exist=false;
                while(j<=l)
                {
                    int mid=j+(l-j)/2;
                    if(nums[mid]==val)
                    {
                        exist=true;
                        break;
                    }
                    else if(nums[mid]>val)
                        l=mid-1;
                    else
                        j=mid+1;
                }
                if(exist && i>0 && nums[i]==nums[i-1])
                    continue;
                if(exist)
                    ans++;
            }
        }
        return ans;
    }
};