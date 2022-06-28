class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> A;
        if(!root)
        {
            return A;
        }
        map<int,int> M;
        queue<pair<Node*,int>> Q;
        Q.push({root,0});
        while(Q.size()>0)
        {
            Node* top=Q.front().first;
            int k=Q.front().second;
            Q.pop();
            M[k]=top->data;
            if(top->left)
            {
                Q.push({top->left,k-1});
            }
            if(top->right)
            {
                Q.push({top->right,k+1});
            }
        }
        for(auto it=M.begin();it!=M.end();it++)
        {
            A.push_back(it->second);
        }
        return A;
        // Your Code Here
    }
};
