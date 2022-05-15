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
    vector<int>depthSumArray;
    void depthSum(TreeNode* root,int d)
    {
        if(!root)
            return;
        if(depthSumArray.size()==d)
            depthSumArray.push_back({});
        depthSumArray[d]+=root->val;
        depthSum(root->left,d+1);
        depthSum(root->right,d+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        depthSum(root,0);
        
        return depthSumArray[depthSumArray.size()-1];
    }
};