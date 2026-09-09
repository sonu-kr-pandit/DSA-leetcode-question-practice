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

    vector<string> ans;

    void solution(TreeNode* root, string wrd){
    if(root == NULL) return;
    if(wrd.size() == 0)
        wrd = to_string(root->val);
    else
        wrd = wrd + "->" + to_string(root->val);
    if(root->left == NULL && root->right == NULL){
        ans.push_back(wrd);
        return;
    }
    solution(root->left, wrd);
    solution(root->right, wrd);
}

vector<string> binaryTreePaths(TreeNode* root) {
    solution(root, "");
    return ans;
        
    
}};