class Solution{
  public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        int ans=1,maxi=INT_MIN;
        sort(arr,arr+n);
        sort(dep,dep+n);
        int i=1,j=0;
        while(i<n && j<n)
        {
            if(arr[i]<=dep[j])
            {
                i++;
                ans++;
            }
            else
            {
                j++;
                ans--;
            }
            maxi=max(maxi,ans);
        }
        return maxi;
    	// Your code here
    }
}
