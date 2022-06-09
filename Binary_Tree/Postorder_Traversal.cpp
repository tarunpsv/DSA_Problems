class Solution {
public:
    vector<int> A;
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL) 
        {
           return A; 
        }
 		
 		if (root->left) 
        {
            postorderTraversal(root->left);  
        }
 		if (root->right) 
        {
            postorderTraversal(root->right);
        }
        A.push_back(root->val);
 		return A; 
    }
};
