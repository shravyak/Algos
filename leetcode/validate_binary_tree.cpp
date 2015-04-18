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

    bool check_BST(TreeNode *root, int min, int max){
        if(!root) return 1;
        if(root->val == INT_MIN){
            if(!root->left && !root->right && min <= root->val) return 1;
            if(root->left) return 0;
        }
        if (root->val == INT_MAX) {
            if(!root->left && !root->right && root->val <= max) return 1;
            if(root->right) return 0;
        } 
        if (min <= root->val && root->val <= max)
            return  check_BST(root->left, min, root->val - 1) 
                    && check_BST(root->right, root->val + 1, max);
        return 0;
    }
    bool isValidBST(TreeNode *root) {
        if(!root) return 1;
        return check_BST(root, INT_MIN, INT_MAX);
     }
};
