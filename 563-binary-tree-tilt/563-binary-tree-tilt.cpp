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
    int totalTilt = 0;
public:
    int sum(TreeNode* root){
       //base case
        if(root == NULL)    return 0;
        
        //rec case
        int leftSum = sum(root->left);
        int rightSum = sum(root->right);
        int tilt = abs(leftSum - rightSum);
        totalTilt += tilt;
        
        //returning the sum of values starting from this node
        return root->val + leftSum + rightSum;
    }
    int findTilt(TreeNode* root) {
        totalTilt = 0;
        sum(root);
        return totalTilt;
        
    }
};