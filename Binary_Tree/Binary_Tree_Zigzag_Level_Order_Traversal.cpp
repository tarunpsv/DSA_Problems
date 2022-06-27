class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> A;
        if(!root)
        {
            return A;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        int count=0;
        while(Q.size()>0)
        {
            int n=Q.size();
            vector<int> B;
            while(n--)
            {
                B.push_back(Q.front()->val);
                if(Q.front()->left)
                {
                    Q.push(Q.front()->left);
                }
                if(Q.front()->right)
                {
                    Q.push(Q.front()->right);
                }
                Q.pop();
            }
            if(count%2)
            {
                reverse(B.begin(),B.end());
            }
            A.push_back(B);
            count++;
        }
        return A;
    }
};
