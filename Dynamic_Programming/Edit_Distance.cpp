class Solution {
public:
    int minDistance(string A, string B) {
        int a=A.length(),b=B.length();
        int dp[a+1][b+1];
        for(int i=0;i<b+1;i++)
        {
            dp[0][i]=i;
        }
        for(int i=0;i<a+1;i++)
        {
            dp[i][0]=i;
        }
        for(int i=1;i<a+1;i++)
        {
            for(int j=1;j<b+1;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else 
                {
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                }
            }
        }
        return dp[a][b];
    }
};
