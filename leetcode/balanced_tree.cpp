/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode *root){
        if(!root) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
    
    bool treeBalan(TreeNode *root){
        if(!root) return 1;
        return (abs(depth(root->left) - depth(root->right)) <= 1 && treeBalan(root->left) && treeBalan(root->right));
    }
    
    bool isBalanced(TreeNode *root) {
        if(!root) return 1;
        if(!root->left && !root->right) return 1;
        return (isBalanced(root->left) 
                && isBalanced(root->right) 
                && abs(depth(root->left) - depth(root->right)) <= 1);
    }
};
