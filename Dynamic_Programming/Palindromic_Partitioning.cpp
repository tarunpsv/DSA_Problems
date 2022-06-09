class Solution{
public:
    int dp[501][501];
    bool ispalindrome(string& s,int i,int j)
    {
        int flag=0;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    int solve(string& s,int i,int j)
    {
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i>=j)
        {
            return dp[i][j]=0;
        }
        
        if(ispalindrome(s,i,j))
        {
            return dp[i][j]=0;
        }
        int ans=INT_MAX;
        for(int k=i;k<j;k++)
        {
            if(ispalindrome(s,k+1,j))
            {
                int left=0;
                if(dp[i][k]!=-1)
                {
                    left=dp[i][k];
                }
                else
                {
                    left=solve(s,i,k);
                    dp[i][k]=left;
                }

                int sol=left+1;
                ans=min(ans,sol);
            }
        }
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        int n=str.length();
        int ans=solve(str,0,n-1);
        return ans;
        // code here
    }
};
