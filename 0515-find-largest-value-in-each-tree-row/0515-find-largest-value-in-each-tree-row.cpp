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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        int maxVal= INT_MIN;
        if(root == NULL){return ans;}
        q.push(root);
        while(!q.empty()){
            int n  = q.size();
            for(int  i = 0; i<n ; i++){
                TreeNode* temp = q.front();
                if(temp != NULL){  maxVal = max(maxVal , temp->val); }
                // maxVal = max(maxVal , temp->val);
                q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            ans.push_back(maxVal);
            maxVal = INT_MIN;
        }return ans;

        
    }
};