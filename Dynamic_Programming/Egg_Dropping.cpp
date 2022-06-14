class Solution{
  public:
    int dp[201][201];
    int solve(int eggs,int floors)
    {
        if(dp[eggs][floors]!=-1)
        {
            return dp[eggs][floors];
        }
        if(floors==0 || floors==1 || eggs==1)
        {
            return dp[eggs][floors]=floors;
        }
        int ans=INT_MAX;
        for(int k=1;k<floors+1;k++)
        {
            int a=0,b=0;
            if(dp[eggs-1][k-1]!=-1)
            {
                a=dp[eggs-1][k-1];
            }
            else
            {
                a=solve(eggs-1,k-1);
                dp[eggs-1][k-1]=a;
            }
            
            if(dp[eggs][floors-k]!=-1)
            {
                b=dp[eggs][floors-k];
            }
            else
            {
                dp[eggs][floors-k]=solve(eggs,floors-k);
                b=dp[eggs][floors-k];
            }
            int temp=1+max(a,b);
            ans=min(ans,temp);
        }
        return dp[eggs][floors]=ans;
    }
    int eggDrop(int n, int k) 
    {
        memset(dp,-1,sizeof(dp));
        int ans=solve(n,k);
        return ans;
    }
};
