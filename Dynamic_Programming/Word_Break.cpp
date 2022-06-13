class Solution
{
public:
    unordered_map<string,int> M;
    bool solve(string s)
    {
        if(M[s])
        {
            return true;
        }
       
        for(int i=1;i<s.size()+1;i++){
            string left=s.substr(0,i);
            if(M[left] &&  solve(s.substr(i)))
            {
                return true;
            }
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for(int i=0;i<wordDict.size();i++)
        {
            M[wordDict[i]]++;
        }
        return solve(s);
    }
};
