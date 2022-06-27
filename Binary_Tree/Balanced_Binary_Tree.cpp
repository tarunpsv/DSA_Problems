class Solution {
public:
    int ans=0;
    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int left=height(root->left),right=height(root->right);
        if(abs(left-right)>1)
        {
            ans++;
        }
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return ans==0;
    }
};
