class Solution{
  public:
  vector<int> leftView(Node *root)
  {
      vector<int> A;
      if(!root)
      {
          return A;
      }
      queue<Node*> Q;
      Q.push(root);
      while(Q.size()>0)
      {
          vector<int> B;
          int n=Q.size();
          while(n--)
          {
              B.push_back(Q.front()->data);
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
          A.push_back(B[0]);
      }
      return A;
  }
}
