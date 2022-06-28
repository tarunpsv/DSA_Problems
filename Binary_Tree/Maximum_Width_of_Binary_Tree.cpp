class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<pair<TreeNode*,int>>Q;
        Q.push({root,0});
        int ans=0;
        while(Q.size()>0)
        {
            int n=Q.size(),l=0,r=0,c=Q.front().second;
            for(int i=0;i<n;i++)
            {
                int d=Q.front().second-c;
                TreeNode* top=Q.front().first;
                Q.pop();
                if(i==0)
                {
                    l=d;
                }
                if(i==n-1)
                {
                    r=d;
                }
                if(top->left)
                {
                    Q.push({top->left,(long long)d*2+1});
                }
                if(top->right)
                {
                    Q.push({top->right,(long long)d*2+2});
                }
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
