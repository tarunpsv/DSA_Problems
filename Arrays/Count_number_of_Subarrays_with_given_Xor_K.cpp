int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> M;
    long long ans=0;
    int p=0,q=0,n=A.size();
    for(int i=0;i<n;i++)
    {
        p^=A[i];
        if(p==B)
        {
            ans++;
        }
        q=p^B;
        if(M.find(q)!=M.end())
        {
            ans+=M[q];
        }
        M[p]++;
    }
    return ans;
}
