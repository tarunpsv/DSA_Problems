class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=-1,ans=0;
        int dp[n+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n+1;i++)
        {
            dp[i][i]=1;
        }
        ans=1;
        start=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                ans=2;
                start=i;
            }
        }
        for(int k=3;k<n+1;k++)
        {
            for(int i=0;i<n+1-k;i++)
            {
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==1)
                {
                    dp[i][j]=1;
                    if(k>ans)
                    {
                        ans=k;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,ans);
    }
};
