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

    bool isSubtreeSym(TreeNode *left , TreeNode *right){
        if(!left && !right) return 1;
        if (left && right) {
            return isSubtreeSym(left->left, right->right) 
                    && isSubtreeSym(left->right , right->left) 
                    && left->val == right->val ;
        }
        return 0;
    }
    bool isSymmetric(TreeNode *root) {
        if(!root) return 1;
        return isSubtreeSym(root->left , root->right);
        
    }
};
