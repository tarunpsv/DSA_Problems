class Solution{
  	public:
    int maxSumIS(int A[], int n)  
    { 
          int B[n],ans=A[0];
          B[0]=A[0];
          for(int i=1;i<n;i++)
          {
              B[i]=A[i];
              for(int j=0;j<i;j++)
              {
                  if(A[j]<A[i] && B[i]<B[j]+A[i])
                  {
                      B[i]=B[j]+A[i];
                      ans=max(ans,B[i]);
                  }
              }
          }
          return ans;
    }  
}
