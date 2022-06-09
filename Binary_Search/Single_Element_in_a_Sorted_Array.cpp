class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j)
        {
            int mid=i+ (j-i)/2;
            if(mid==0 || mid==nums.size()-1 || (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]))
            {
                return nums[mid];
            }
            else if(mid%2)
            {
                if(nums[mid]==nums[mid-1])
                {
                    i=mid+1;
                }
                else
                {
                    j=mid-1;
                }
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                {
                    j=mid-1;
                }
                else
                {
                    i=mid+1;
                }
            }
        }
        return nums[0];
    }
};
