class Solution{
  public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    vector<int> vis(n,0),ans;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<adj[i].size();j++)
	        {
	            vis[adj[i][j]]++;
	        }
	    }
	    queue<int> Q;
	    for(int i=0;i<n;i++)
	    {
	        if(vis[i]==0)
	        {
	            Q.push(i);
	        }
	    }
	    while(Q.size()>0)
	    {
	        int a=Q.front();
	        Q.pop();
	        ans.push_back(a);
	        for(int i=0;i<adj[a].size();i++)
	        {
	            vis[adj[a][i]]--;
	            if(vis[adj[a][i]]==0)
	            {
	                Q.push(adj[a][i]);
	            }
	        }
	    }
	    return ans;
	    // code here
	} 
}
