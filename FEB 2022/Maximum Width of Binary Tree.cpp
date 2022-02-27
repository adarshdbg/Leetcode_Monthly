/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        if(!root)
            return 0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,1});
        long long ans=0;
        while(!q.empty())
        {
            int size=q.size();
            //cout<<ans<<" ";
            ans=max(ans,q.back().second-q.front().second+1);
            while(size--)
            {
                pair<TreeNode*,int> curr=q.front();
                q.pop();
                if(curr.first->left)
                {
                    q.push({curr.first->left,2LL*curr.second});
                }
                if(curr.first->right)
                {
                    q.push({curr.first->right,2LL*curr.second+1});
                }
                
            }
        }
        return ans;
    }
};