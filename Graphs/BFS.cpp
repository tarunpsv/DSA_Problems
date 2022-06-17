class Solution{
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
        vector<int> vis(n,0),ans;
        queue<int> A;
        A.push(0);
        while(A.size()>0)
        {
            int a=A.front();
            A.pop();
            vis[a]=1;
            ans.push_back(a);
            for(int i=0;i<adj[a].size();i++)
            {
                if(vis[adj[a][i]]==0)
                {
                    A.push(adj[a][i]);
                    vis[adj[a][i]]=1;
                }
            }
        }
        return ans;
        // Code here
    }
}
