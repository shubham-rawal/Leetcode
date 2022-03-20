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
    //Time Complexity of this solution is O(N^2)
    int height(TreeNode* root){
        //base case
        if(root == NULL)    return 0;
        
        return max(height(root->left), height(root->right)) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //base case
        if(root == NULL)    return 0;
        
        int D1 = height(root->left) + height(root->right);
        int D2 = diameterOfBinaryTree(root->left);
        int D3 = diameterOfBinaryTree(root->right);
        
        return max(D1, max(D2, D3));
    }
};