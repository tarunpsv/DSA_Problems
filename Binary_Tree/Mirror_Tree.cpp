class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void solve(Node* root){
        if(root==NULL) 
        {
            return ;
        }
       
        Node* temp=root->left;
        root->left=root->right;
        root->right=temp;
       
        solve(root->left);
        solve(root->right);
       
        return;
       
    }
   
    void mirror(Node* node) {
        if(node==NULL)
        {
            return;
        }
        solve(node);
   }
};
