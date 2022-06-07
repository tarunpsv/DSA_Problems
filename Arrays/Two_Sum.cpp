class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> A;
        for(int i=0;i<nums.size();i++)
        {
            int a = target - nums[i];
            if(A.find(a)!=A.end())
            {
                return {A[a],i};
            }
            A[nums[i]]=i;
        }
        return {0,1};
    }
};
