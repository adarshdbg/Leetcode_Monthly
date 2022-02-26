class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int first=1,second=1;
        
        int i=0,j=0;
        
        while(i<version1.size() || j<version2.size())
        {
            int first=0,second=0;
            while(i<version1.size() && version1[i++]!='.')
            {
                first=first*10+(version1[i-1]-'0');
            }
            while(j<version2.size() && version2[j++]!='.')
            {
               second=second*10+(version2[j-1]-'0');
            }
            if(first==second)
                continue;
            else if(first<second)
                return -1;
            else
                return 1;
        }
        
        return 0;
    }
};