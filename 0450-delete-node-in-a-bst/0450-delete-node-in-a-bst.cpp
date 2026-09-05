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

    TreeNode* solution(TreeNode* root, int key){
        if( root == NULL) return NULL;

        if(root->val > key){
            root->left = solution(root->left , key);
        }
        else if(root->val < key){
            root->right = solution(root->right , key);
        }else{
            if(root->left == NULL){return root->right;}
            if(root->right == NULL){return root->left;}

            TreeNode* succesor = findMin(root->right);
            root->val = succesor->val;
            root->right =  solution(root->right , succesor->val);
        }
        return root;
    }

    TreeNode* findMin(TreeNode* root){
        while(root->left != NULL){
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return solution(root , key);
    }
};