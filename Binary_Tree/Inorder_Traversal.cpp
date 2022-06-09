class Solution {
public:
    vector<int> A;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) 
       {
           return A; 
       }
 		if (root->left) 
        {
            inorderTraversal(root->left);  
        }
        A.push_back(root->val);
 		if (root->right) 
        {
            inorderTraversal(root->right);
        }
 		return A; 
        
    }
};
