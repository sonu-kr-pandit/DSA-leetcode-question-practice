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

    // int count(TreeNode* root){
    //     if(root == NULL ){return 0;}
    //     return  1 + count(root->left) + count(root->right);
    // }

    // bool DFS(TreeNode* root , int i , int nodeCount){
    //     if(root == NULL){return true;}
    //     if(i > nodeCount){return false;}

    //     return DFS(root->left , 2*i , nodeCount) && DFS(root->right , 2*i + 1 , nodeCount);
    // }



    bool isCompleteTree(TreeNode* root) {


        //*** method 1 , BFS ***//

        if(root == NULL){return false;}

        queue<TreeNode*> q;

        q.push(root);

        bool pastNull = false;

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node == NULL){
                pastNull = true;
            }else{
                if(pastNull == true){
                    return false;
                }
                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;


        //*** METHOD 2 , DFS ***//

        // if(root == NULL) return false;

        // int nodeCount = count(root);

        // int i  = 1;

        // return DFS(root , i , nodeCount);

        
    }
};