class Solution {
public:
    int findKthLargest(vector<int>& B, int k) {
        priority_queue<int,vector<int>,greater<int> >A;
        for(int i=0;i<B.size();i++)
        {
            A.push(B[i]);
            if(A.size()>k)
            {
                A.pop();
            }
        }
        return A.top();
    }
};
