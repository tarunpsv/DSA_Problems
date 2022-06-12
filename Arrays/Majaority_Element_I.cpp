class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0],count=1;
        for(int i=1;i<n;i++)
        {
            if(ans==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            
            if(count==0)
            {
                count=1;
                ans=nums[i];
            }
        }
        return ans;
    }
};
