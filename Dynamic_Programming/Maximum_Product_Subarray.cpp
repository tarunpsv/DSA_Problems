class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=nums[0],b=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(a,b);
            }
            a=max(nums[i],a*nums[i]);
            b=min(nums[i],b*nums[i]);
            ans=max(ans,a);
        }
        return ans;
    }
};
