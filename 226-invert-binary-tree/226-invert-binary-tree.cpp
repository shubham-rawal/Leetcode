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
    void helper(TreeNode* temp){
        //base case
        if(temp == NULL)    return;
        
        swap(temp->left, temp->right);
        helper(temp->left);
        helper(temp->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp = root;
        helper(temp);
        return root;
    }
};