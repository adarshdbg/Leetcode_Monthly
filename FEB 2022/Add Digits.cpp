class Solution {
public:
    int addDigits(int num) {
        
        int ans=0,p=1;
        while(p)
        {
            while(num)
            {
                ans+=(num%10);
                num/=10;
            }
            num=ans;
            ans=0;
            if(!(num/10))
                p=0;
                
        }
        return num;
    }
};