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
    int height (TreeNode* root , int & result){
        if(root == NULL){return 0;}
        int leftH = height(root->left , result);
        int rightH = height(root->right , result);
        result = max(result, leftH + rightH);
        return max(leftH , rightH) + 1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL ){return 0;}

        int result = INT_MIN;

        height(root , result);
        
        return  result;


        
        // int leftD = diameterOfBinaryTree(root->left);
        // int rightD = diameterOfBinaryTree(root->right);
        // return max(currNode , max(leftD , rightD));
        
    }
};