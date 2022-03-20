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

class HDPair{
public: 
    int height;
    int diameter;
};

class Solution {
public:
    //Time Complexity of this solution is O(N)
    HDPair calcDiameter(TreeNode* root){
        HDPair p;
        //base case
        if(root == NULL){
            p.height = p.diameter = 0;
            return p;
        }
        
        //rec case
        HDPair Left = calcDiameter(root->left);
        HDPair Right = calcDiameter(root->right);
        
        //for current node height
        p.height = max(Left.height, Right.height) + 1;
        
        //for current node diameter
        int D1 = Left.height + Right.height;
        int D2 = Left.diameter;
        int D3 = Right.diameter;
        
        p.diameter = max(D1, max(D2, D3));
        
        return p;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return calcDiameter(root).diameter;
    }
};


