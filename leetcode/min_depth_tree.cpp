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
    int minDe(TreeNode *root){
        if(!root) return INT_MAX;
        if(!root->left && !root->right) return 1;
        return min(minDe(root->left),minDe(root->right)) + 1;
    }
    int minDepth(TreeNode *root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        else return minDe(root);
    }
};
