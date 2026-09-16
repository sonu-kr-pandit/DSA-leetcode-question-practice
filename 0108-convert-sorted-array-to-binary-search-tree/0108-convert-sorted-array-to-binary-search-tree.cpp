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
    TreeNode* buildtree(vector<int>& nums , int st , int end){
        if(st>end){
            return NULL;
        }
        int mid = st + (end-st)/2;
        TreeNode* currnode = new TreeNode(nums[mid]);
        currnode->left = buildtree(nums,st,mid-1);
        currnode->right= buildtree(nums,mid+1,end);
        return currnode;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildtree(nums,0,nums.size()-1);
    }
};