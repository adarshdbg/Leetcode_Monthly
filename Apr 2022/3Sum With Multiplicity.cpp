class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size(),MOD=1e9+7,ans=0;
    
        sort(arr.begin(),arr.end());

        
        for(int i=0;i<n;i++)
        {
            int value=target-arr[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(arr[j]+arr[k]>value)
                    k--;
                else if(arr[j]+arr[k]<value)
                    j++;
                else if(arr[j]==arr[k])
                {
                     ans += (k-j+1) * (k-j) / 2;
                    ans %= MOD;
                    break;
                }
                else
                {
                    int left = 1, right = 1;
                    while (j+1 < k && arr[j] == arr[j+1]) {
                        left++;
                        j++;
                    }
                    while (k-1 > j && arr[k] == arr[k-1]) {
                        right++;
                        k--;
                    }

                    ans += left * right;
                    ans %= MOD;
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};