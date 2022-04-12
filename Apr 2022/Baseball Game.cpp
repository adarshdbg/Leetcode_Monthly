class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
		
	  int ans=0;
	  for(int i=0;i<ops.size();i++)
	  {
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
                s.push(2*s.top());
            else if(ops[i]=="+")
            {
                int first=s.top();
                s.pop();
                int second=s.top();
                s.push(first);
                s.push(first+second);
            }
            else
            {
                s.push(stoi(ops[i]));
            }

      }
        while(!s.empty())
        {
            //cout<<s.top()<<" ";
            ans+=s.top(),s.pop();
        }
            
      return ans;

        
    }
};