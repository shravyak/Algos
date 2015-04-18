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
public : 
    void dfs(TreeNode* root,int cur, int &res){
        if (root->left==NULL && root->right==NULL){
            cur=cur*10+root->val;
            res+=cur;
        }else{
            cur=cur*10+root->val;
            if (root->left){
                dfs(root->left,cur,res);
            }
            if (root->right){
                dfs(root->right,cur,res);
            }
        }
    }
    int sumNumbers(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res=0;
        if (!root){return res;}
        dfs(root,0,res);
        return res;
    }
};
