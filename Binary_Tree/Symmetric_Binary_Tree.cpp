class Solution {
public:
    bool isSymmetricSide(TreeNode* left, TreeNode* right){
    if(left==NULL || right==NULL){
        return left==right;
    }
    if(left->val!=right->val){
        return false;
    }
    return isSymmetricSide(left->left, right->right) && isSymmetricSide(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricSide(root->left,root->right);        
    }
};
