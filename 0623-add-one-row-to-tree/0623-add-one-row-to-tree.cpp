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

    TreeNode* solution(TreeNode* root, int val, int depth , int currDepth){
        if(root == NULL) return NULL;
        if(currDepth == depth-1){
            TreeNode* leftTree = root->left;
            TreeNode* rightTree = root->right;

            // TreeNode* newRoot = new TreeNode(val);

            root->left = new TreeNode(val);
            root->right = new TreeNode(val);

            root->left->left = leftTree;
            root->right->right = rightTree;

            return root;
        }

        solution(root->left , val , depth , currDepth+1);
        solution(root->right , val , depth , currDepth+1);

        return root;

    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        int currDepth = 1;
        return solution(root , val , depth , currDepth);
        
    }
};