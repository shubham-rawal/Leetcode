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
    bool symmetric(TreeNode* root1, TreeNode* root2){
        //base case
        if(root1 == NULL and root2 == NULL) return true;
        
        if(root1 and root2 and root1->val == root2->val){
            return symmetric(root1->left, root2->right) and symmetric(root1->right, root2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return symmetric(root, root);
    }
};