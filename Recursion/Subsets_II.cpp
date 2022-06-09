class Solution {
public:
    set< vector<int> > S;
    void solve(vector<int> &nums, int i,vector<int> A,int n)
    {
        if(i==n)
        {
            S.insert(A);
            return;
        }
        solve(nums,i+1,A,n);
        A.push_back(nums[i]);
        solve(nums,i+1,A,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> A;
        solve(nums,0,A,nums.size());
        vector< vector<int> > ans(S.begin(),S.end());
        return ans;
    }
};
