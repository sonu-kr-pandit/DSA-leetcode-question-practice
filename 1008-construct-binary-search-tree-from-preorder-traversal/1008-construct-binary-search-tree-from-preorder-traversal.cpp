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
    TreeNode* insertion(TreeNode* root , int val){
        if(root == NULL){
            root = new TreeNode(val);
            return root;
        }

        if(val< root->val){
             root->left = insertion(root->left , val);
        }else{
              root->right = insertion(root->right , val);
        }
        return root;
      
       
        
    }


    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i = 0 ; i<preorder.size() ; i++){
            root = insertion(root , preorder[i]);
        }
        return root;
        
    }
};