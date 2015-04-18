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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        stack<TreeNode *> s;
        if(!root) return vector<int>();
        while(1){
        while(root != NULL){
            result.push_back(root->val);
            s.push(root);
            root = root->left;
        }
        if(s.empty()) break;
        root = s.top();
        s.pop();
        
        root = root->right;
        }
        return result;
    }
};
