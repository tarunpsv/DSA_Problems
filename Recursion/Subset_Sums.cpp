class Solution{
  public:
    vector<int> S;
    void solve(vector<int> &nums, int i,int sum,int n)
    {
        if(i==n)
        {
            S.push_back(sum);
            return ;
        }
        solve(nums,i+1,sum,n);
        sum+=nums[i];
        solve(nums,i+1,sum,n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum=0;
        solve(arr,0,sum,N);
        return S;
        // Write Your Code here
    }
};
