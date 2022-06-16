class Solution{
  public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[M+1][V+1];
	    for(int i=0;i<V+1;i++)
	    {
	        dp[0][i]=INT_MAX-1;
	    }
	    for(int i=1;i<M+1;i++)
	    {
	        dp[i][0]=0;
	    }
	    for(int i=1;i<M+1;i++)
	    {
	        for(int j=1;j<V+1;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    if(dp[M][V]==INT_MAX-1)
	    {
	        return -1;
	    }
	    return dp[M][V];
	    // Your code goes here
	}
}
