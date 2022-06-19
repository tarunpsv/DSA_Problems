class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> A;
        unordered_map<int,int> B;
        for(int i=n-1;i>=0;i--)
        {
            while(A.size()>0 && nums2[A.top()]<=nums2[i])
            {
                A.pop();
            }
            if(A.size()!=0)
            {
                B[nums2[i]]=nums2[A.top()];
            }
            else
            {
                B[nums2[i]]=-1;
            }
            A.push(i);
        }
        for(int i=0;i<nums1.size();i++)
        {
            nums1[i]=B[nums1[i]];
        }
        return nums1;
    }
};
