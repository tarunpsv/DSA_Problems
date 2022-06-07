class Solution {
public:
    bool canPartition(vector<int>& A) {
        int sum=0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
        }
        if(sum%2==1)
        {
            return 0;
        }
        sum=sum/2;
        int n=A.size();
        int dp[n+1][sum+1];
        for(int i=0;i<sum+1;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<n+1;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(A[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-A[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};
