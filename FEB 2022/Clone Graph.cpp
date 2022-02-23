/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>m;
        if(!node)
            return NULL;
        queue<Node*>q;
        Node* ans=new Node(node->val,{});
        m[node]=ans;
        q.push(node);
        while(!q.empty())
        {
            Node *curr=q.front();
            q.pop();
            for(Node* i:curr->neighbors)
            {
                if(m.find(i)==m.end())
                {
                    q.push(i);
                    m[i]=new Node(i->val,{});
                }
                m[curr]->neighbors.push_back(m[i]);         
            }
        }
        
        return ans;
        
        
    }
};