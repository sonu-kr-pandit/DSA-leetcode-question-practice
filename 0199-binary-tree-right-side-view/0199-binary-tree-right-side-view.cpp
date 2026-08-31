/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:

    // void preOrder(TreeNode* root , int level , vector<int> &ans){
    //     if(root == NULL){return ;}

    //     if(ans.size() < level){
    //         ans.push_back(root->val);
    //     }

    //     preOrder(root->right, level + 1 , ans);
    //     preOrder(root->left , level + 1 , ans);
    // }

    vector<int> rightSideView(TreeNode* root) {

        //** METHOD 1 , LEVEL ORDER TRAVERSAL (BFS) **//

        if(root == NULL){return {};}
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while (!q.empty()) {
            int s = q.size();
            TreeNode* node = NULL;
            while (s--) {
                node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                
            }
            ans.push_back(node->val);
        }
        return ans;


        //** METHOD 2 , PREORDER (DFS) **//
        // if(root == NULL){return {};}

        // vector<int> ans;
        // preOrder(root , 1 , ans);
        // return ans;
    }
};