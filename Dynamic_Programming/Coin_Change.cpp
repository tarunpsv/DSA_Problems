class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
        {
            return 0;
        }
        int dp[coins.size()+1][amount+1];
        for(int i=0;i<coins.size()+1;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<amount+1;i++)
        {
            dp[0][i]=INT_MAX-1;;
        }
        for(int i=1;i<coins.size()+1;i++)
        {
            for(int j=1;j<amount+1;j++)
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
        if(dp[coins.size()][amount]==INT_MAX-1)
            return -1;
        return dp[coins.size()][amount];
    }
};
