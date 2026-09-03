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

    vector<vector<int>> ans;

    void hasPathSum(TreeNode* root, int targetSum , vector<int >temp) {
        if(root == NULL) return ;
        targetSum = targetSum - root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL && targetSum == 0 )
            ans.push_back(temp);
        hasPathSum(root->left , targetSum , temp);
        hasPathSum(root->right , targetSum , temp);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        hasPathSum(root , targetSum , temp);
        return ans;
    }
};