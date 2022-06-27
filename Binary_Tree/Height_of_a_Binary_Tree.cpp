class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*> A;
        A.push(root);
        int depth=0;
        while(A.size())
        {
            depth++;
            int n=A.size();
            while(n--)
            {
                TreeNode* head=A.front();
                A.pop();
                if(head->left)
                {
                    A.push(head->left);
                }
                if(head->right)
                {
                    A.push(head->right);
                }
            }
        }
        return depth;
    }
};
