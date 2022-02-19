class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        int minn=INT_MAX;
        priority_queue<int>q;
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]%2?nums[i]*2:nums[i];
            q.push(nums[i]);
            minn=min(minn,nums[i]);
        }
        int ans=INT_MAX;
        
        while(q.top()%2==0)
        {
            ans=min(ans,q.top()-minn);
            minn=min(minn,q.top()/2);
            q.push(q.top()/2);
            q.pop();
        }
        
        return min(ans,q.top()-minn);
        
    }
};