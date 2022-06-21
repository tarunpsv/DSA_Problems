class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> A;
        int res = 0, prev, next;
        for (auto num : nums) {
            if (A.find(num) == A.end()) 
            {
                prev = A.find(num-1) != A.end() ? A[num-1] : 0;
                next = A.find(num+1) != A.end() ? A[num+1] : 0;
                A[num] += prev + next + 1;
                A[num-prev] = A[num];
                A[num+next] = A[num];
                res = max(res, A[num]);
            }
        }
        return res;
    }
};
