class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>count(26);
        for(auto &i:t)
            count[i-'a']++;
        //char ans='';
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i])
                return 'a'+i;
        }
        
        
        return {};
        
    }
};