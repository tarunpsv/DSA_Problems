class Solution {
public:
    int longestCommonSubsequence(string A, string B) {
        if(A.length()==0 || B.length()==0)
        {
            return 0;
        }
        int a=A.length(),b=B.length();
        int dp[a+1][b+1];
        for(int i=0;i<a+1;i++)
        {
            for(int j=0;j<b+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
                else if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[a][b];
    }
};
