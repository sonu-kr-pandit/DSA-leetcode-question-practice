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

    TreeNode* DeleteHelper( TreeNode* root, unordered_set<int> st, vector<TreeNode*> &ans){

        if(root == NULL){return NULL ;}

        root->left = DeleteHelper(root->left , st , ans);
        root->right = DeleteHelper(root->right , st , ans);

        if(st.find(root->val) != st.end()){
            if(root->left != NULL) ans.push_back(root->left);
            if(root->right != NULL) ans.push_back(root->right);
            return NULL;
        }else{
            return root;
        }
    }


    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> st;
        vector<TreeNode*> ans;
        for(int &it : to_delete){
            st.insert(it);
        }
        DeleteHelper(root , st , ans);
        if(st.find(root->val)==st.end()){
            ans.push_back(root);
        }
        return ans;
        
    }
};