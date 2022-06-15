class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a=0,a1=1e9 + 1,b=0,b1=1e9 + 1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(a1==nums[i])
            {
                a++;
            }
            else if(b1==nums[i])
            {
                b++;
            }
            else if(a==0)
            {
                a1=nums[i];
                a=1;
            }
            else if(b==0)
            {
                b1=nums[i];
                b=1;
            }
            else
            {
                a--;
                b--;
            }
        }
        a=0;
        b=0;
        for(int i=0;i<n;i++)
        {
            if(a1==nums[i])
            {
                a++;
            }
            if(b1==nums[i])
            {
                b++;
            }
        }
        n/=3;
        vector<int> ans;
        if(a>n)
        {
            ans.push_back(a1);
        }
        if(b>n)
        {
            ans.push_back(b1);
        }
        return ans;
    }
};
