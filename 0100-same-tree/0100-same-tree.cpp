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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p->val != q->val){return false;}
        // else if( (p->left != NULL && q->left == NULL) || ( p->right != NULL && q->right == NULL )){return false;}
        // else if(p->val == q->val){
        //     if( (p->left == NULL && q->left == NULL) && ( p->right == NULL && q->right == NULL ) ){
        //         return true;
        //     }
        // }
        // return isSameTree(p->left , q->left) && isSameTree(p->right , q->right);

        if(p == NULL && q == NULL) return true;      // both empty -> same
        if(p == NULL || q == NULL) return false;     // one empty, other not -> different
        if(p->val != q->val) return false;            // now safe to dereference
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
    }
};