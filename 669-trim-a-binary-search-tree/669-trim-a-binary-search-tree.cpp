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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        //base case
        if(root == NULL)    return root;
        
        //if root->val > high, we know that the subtree must be to the left of the root.
        if(root->val > high)    return trimBST(root->left, low, high);
        
        //if root->val < low, we know that the subtree must be to the right of the root
        if(root->val < low) return trimBST(root->right, low, high);
        
        //if both the conditions are satisfied for the root, we return both.
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
    }
};