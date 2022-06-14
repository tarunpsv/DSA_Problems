class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        int n=A.size();
        int B[n],ans=1;
        B[0]=1;
        for(int i=1;i<n;i++)
        {
            B[i]=1;
            for(int j=0;j<i;j++)
            {
                if(A[j]<A[i] && B[i]<B[j]+1)
                {
                    B[i]=B[j]+1;
                    ans=max(ans,B[i]);
                }
            }
        }
        return ans;
    }
};
