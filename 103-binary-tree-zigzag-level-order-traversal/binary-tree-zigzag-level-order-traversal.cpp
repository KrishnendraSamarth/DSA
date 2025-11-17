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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return{};
        q.push(root);
        int cnt=0;
        while(!q.empty())
        {
            cnt++;
            vector<int> level;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
               
                
                if(cur->left!=NULL) q.push(cur->left);
                if(cur->right!=NULL) q.push(cur->right);
                
                level.push_back(cur->val);
            }
            if(cnt%2!=0) ans.push_back(level);
            else
            {
                reverse(level.begin(),level.end());
                ans.push_back(level);
            }
        }
        return ans;
    }
};