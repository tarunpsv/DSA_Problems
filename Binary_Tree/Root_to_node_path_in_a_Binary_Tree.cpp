class Solution{
  public:
    bool getPath(TreeNode *root, int x, vector<int> &A)
    {
        if(!root)
        {
            return false;
        }
        if(root->val == x)
        {
            return true;
        }
        A.push_back(root->val);
        if(getPath(root->left,x,A) || getPath(root->right,x,A))
        {
            return true;
        }
        A.pop_back();   
        return false;
    }
}
