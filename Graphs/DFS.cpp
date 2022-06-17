class Solution{
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        vector<int> vis(n,0),ans;
        stack<int> A;
        A.push(0);
        ans.push_back(0);
        while(A.size()>0)
        {
            int a=A.top();
            vis[a]=1;
            int flag=0;
            for(int i=0;i<adj[a].size();i++)
            {
                if(vis[adj[a][i]]==0)
                {
                    vis[adj[a][i]]=1;
                    A.push(adj[a][i]);
                    flag=1;
                    ans.push_back(adj[a][i]);
                    break;
                }
            }
            if(flag==0)
            {
                A.pop();
            }
        }
        return ans;
        // Code here
    }
}
