class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> A;
        int i=0,j=0,ans=0;
        while(j<s.length())
        {
            A[s[j]]++;
            while(A[s[j]]>1)
            {
                A[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
