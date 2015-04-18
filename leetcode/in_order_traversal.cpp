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
    vector<int> inorderTraversal(TreeNode *root) {
        if(!root) return vector<int>();  
        vector<int> output;
        stack<TreeNode *> s;
        while(1){
        while(root){
            s.push(root);
            root = root->left;
        }
        if(s.empty()) break;
        root = s.top();
        output.push_back(root->val);
        s.pop();
        root = root->right;
        }
        return output;
    }
};
