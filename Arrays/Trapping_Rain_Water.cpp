class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3)
        {
            return 0;
        }
        vector<int> A(n,0),B(n,0);
        A[0]=height[0];
        for(int i=1;i<n;i++)
        {
            A[i]=max(A[i-1],height[i]);
        }
        B[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            B[i]=max(B[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(A[i],B[i]);
            ans-=height[i];
        }
        return ans;
    }
};
