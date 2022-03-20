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

//Time complexity for this solution is O(N^2).
class Solution {
public:
    int height(TreeNode* root){
        //base case
        if(root == NULL)    return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        //base case
        if(root == NULL)    return 1;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool temp = abs(height(root->left) - height(root->right)) <=1;
        if(left and right and temp) return true;
        
        return false;
    }
};