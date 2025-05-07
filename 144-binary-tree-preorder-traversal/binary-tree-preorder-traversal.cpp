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
    void foo(TreeNode* root,vector<int>* inp){
        if(root == nullptr) return ;
        inp->push_back(root->val);
        if(root->left != nullptr) foo(root->left,inp);
        if(root->right != nullptr) foo(root->right,inp);
        


    };
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> *v = new vector<int>();
        foo(root, v);
        return *v;
        
    }
};