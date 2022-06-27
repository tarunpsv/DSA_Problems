class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > A;
        if(!root)
            return A;
        queue<TreeNode* > B;
        B.push(root);
        while(B.size()>0)
        {
            int q=B.size();
            vector<int> C;
            while(q--)
            {
                TreeNode* p=B.front();
                B.pop();
                C.push_back(p->val);
                if(p->left)
                    B.push(p->left);
                if(p->right)
                    B.push(p->right);
            }
            A.push_back(C);
        }
        return A;
    }
};
