class Solution{
    public:
    void dfs(int r,int c,int n,vector<vector<int>> &m,vector<string> &ans,string asf,vector<vector<bool>> &vis){
        if(r<0 || r>=n || c<0 || c>=n || m[r][c]==0 || vis[r][c]==1) 
        {
            return;
        }
        if(r==n-1 && c==n-1){
            ans.push_back(asf);
            return;
        }
        vis[r][c]=1;
        dfs(r-1,c,n,m,ans,asf+"U",vis);
        dfs(r+1,c,n,m,ans,asf+"D",vis);
        dfs(r,c-1,n,m,ans,asf+"L",vis);
        dfs(r,c+1,n,m,ans,asf+"R",vis);
        vis[r][c]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<bool>> vis(n,vector<bool>(n,0));
        dfs(0,0,n,m,ans,"",vis);
        return ans;
    }
};
