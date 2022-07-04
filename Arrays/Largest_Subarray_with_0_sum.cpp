class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    { 
        int sum=0,ans=0;
        unordered_map<int,int> B;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                ans=i+1;
            }
            if(B.find(sum)!=B.end())
            {
                ans=max(ans,i-B[sum]);
            }
            else
            {
                B[sum]=i;
            }
        }
        return ans;
        // Your code here
    }
};
