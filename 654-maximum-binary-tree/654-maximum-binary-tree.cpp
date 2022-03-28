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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        //base case
        if(nums.size() == 0){
            return NULL;
        }
        
        int maxIdx = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] > nums[maxIdx]){
                maxIdx = i;
            }
        }
        
        TreeNode* root = new TreeNode(nums[maxIdx]);
        
        vector<int> prefix;
        for(int i = 0; i<maxIdx; i++){
            prefix.push_back(nums[i]);
        }
        
        vector<int> suffix;
        for(int i = maxIdx+1; i<nums.size(); i++){
            suffix.push_back(nums[i]);
        }
        
        root->left = constructMaximumBinaryTree(prefix);
        root->right = constructMaximumBinaryTree(suffix);
        
        return root;
        
    }
};