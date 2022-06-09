class Solution{
public:
    int dp[101][101];
    int solve(int* A,int i,int j)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i>=j)
        {
            return dp[i][j]=0;
        }
        int sol=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int ans=solve(A,i,k)+solve(A,k+1,j)+(A[i-1]*A[k]*A[j]);
            sol=min(ans,sol);
        }
        return dp[i][j]=sol;
    }
    
    int matrixMultiplication(int n, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        int ans=solve(arr,1,n-1);
        return ans;
        // code here
    }
};
