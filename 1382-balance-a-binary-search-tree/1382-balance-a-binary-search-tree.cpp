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
   
    TreeNode* buildTree(vector<int>& nums, int st, int end) {
        if (st > end) { return NULL; }
        int mid = st + (end - st) / 2;
        TreeNode* currnode = new TreeNode(nums[mid]);
        currnode->left = buildTree(nums, st, mid - 1);
        currnode->right = buildTree(nums, mid + 1, end);
        return currnode;
    }

    void Inorder(TreeNode* root, vector<int>& nums) {
        if (root == NULL) { return; }
        Inorder(root->left, nums);
        nums.push_back(root->val);
        Inorder(root->right, nums);
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        Inorder(root, nums);
        return buildTree(nums, 0, nums.size() - 1);
    }
};