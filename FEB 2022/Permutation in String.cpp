class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>count1(26,0),count2(26,0);
        if(s1.size()>s2.size())
            return false;
        for(auto &i:s1)
            count1[i-'a']++;
        int n=s1.size();
        for(int i=0;i<s2.size();i++)
        {
            if(i<n-1)
                count2[s2[i]-'a']++;
            else
                if(i==n-1)
                    count2[s2[i]-'a']++;
                else
                    count2[s2[i]-'a']++,count2[s2[i-n]-'a']--;
            if(count2==count1)
                return true;
            
        }
        return false;
    }
};