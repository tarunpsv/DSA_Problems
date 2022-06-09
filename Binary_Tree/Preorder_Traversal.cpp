class Solution {
public:
    vector<int> A;
    vector<int> preorderTraversal(TreeNode* root) {
       if (root == NULL) 
       {
           return A; 
       }
 		A.push_back(root->val);
 		if (root->left) 
        {
            preorderTraversal(root->left);  
        }
 		if (root->right) 
        {
            preorderTraversal(root->right);
        }
 		return A; 
    }
};
