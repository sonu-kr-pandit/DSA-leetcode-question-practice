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
    int maxD = -1;

    void MaxDiffAll(TreeNode* root , TreeNode* child ){
        if(root == NULL || child == NULL) return ; 

        maxD = max(maxD , abs(root->val - child->val));
        MaxDiffAll(root , child->left);
        MaxDiffAll(root , child->right);

    }

    void MaxDiff(TreeNode* root){

        if(root == NULL ) return ;
        
        MaxDiffAll(root , root->left);
        MaxDiffAll(root , root->right);

        MaxDiff(root->left);
        MaxDiff(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
        MaxDiff(root);
        return maxD;
        
    }
};