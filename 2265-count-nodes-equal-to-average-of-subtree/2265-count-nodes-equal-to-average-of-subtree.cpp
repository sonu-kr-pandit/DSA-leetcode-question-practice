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
    int cnt = 0;
    void Inorder( TreeNode* root , vector<int> &sub ){
        if(root == NULL) return;
        Inorder(root->left , sub);
        sub.push_back(root->val);
        Inorder(root->right , sub);
    }

    void Count(TreeNode* root){
        vector<int> sub;
        Inorder(root , sub);
        int Avg = 0;
        for(int i = 0 ; i<sub.size() ; i++){
            Avg += sub[i];
        }
        if(root != NULL  && root->val == (Avg)/sub.size()){
            cnt++;
        }
        if(root->left != NULL) Count(root->left);
        if(root->right != NULL) Count(root->right);
    }

    

    int averageOfSubtree(TreeNode* root) {
        Count(root);
        return cnt;
        
    }
};