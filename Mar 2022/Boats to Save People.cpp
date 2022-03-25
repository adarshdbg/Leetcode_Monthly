static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int i=0, j=people.size()-1, ans=0;
        
        while(i<j)
        {
            if(people[i]+people[j]<=limit)
                i++,ans--;
            j--;
        }
        
        return people.size()+ans;
    }
};