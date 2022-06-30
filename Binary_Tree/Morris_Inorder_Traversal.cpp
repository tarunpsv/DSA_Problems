class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector < int > A;
        TreeNode* cur = root;
        while (cur != NULL) 
        {
            if(cur -> left == NULL) 
            {
              A.push_back(cur -> val);
              cur = cur -> right;
            } 
            else 
            {
                TreeNode* prev = cur -> left;
                while (prev -> right != NULL && prev -> right != cur) 
                {
                    prev = prev -> right;
                }
    
                if (prev -> right == NULL) 
                {
                    prev -> right = cur;
                    cur = cur -> left;
                } 
                else 
                {
                    prev -> right = NULL;
                    A.push_back(cur -> val);
                    cur = cur -> right;
                }
            }
        }
        return A;
    }
};
