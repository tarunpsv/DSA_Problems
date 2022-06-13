class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> A;
        for(int i=0;i<nums.size();i++)
        {
            A[nums[i]]++;
        }
        vector<int> B;
        priority_queue< pair<int,int> > C;
        for(auto i=A.begin();i!=A.end();i++)
        {
            C.push({i->second,i->first});
        }
        for(int i=0;i<k;i++)
        {
            int a=C.top().second;
            B.push_back(a);
            C.pop();
        }
        return B;
    }
};
