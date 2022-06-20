class Solution {
public:
    int solve(string A, string B)
    {
        if(A.length()==0 || B.length()==0)
        {
            return 0;
        }
        int n=B.length(),key=1;
        if(A.substr(0,n)==B)
        {
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            key=(key*31)%100000;  
        }
        int score=0,req=0;
        for(int i=0;i<n;i++)
        {
            req=(req*31 + B[i])%100000;
        }
        for(int i=0;i<A.length();i++)
        {
            score=(score*31 + A[i])%100000;
            if(i<n)
            {
                continue;
            }
            else
            {
                score=(score- (A[i-n]*key))%100000;
            }
            if(score<0)
            {
                score+=100000;
            }
            if(score==req && A.substr(i-n+1,n)==B)
            {
                return 1;
            }
        }
        return 0;
    }
    
    int repeatedStringMatch(string A, string B) {
        if(A==B)
        {
            return 1;
        }
        string sol=A;
        int ans=1;
        while(sol.length()<B.length())
        {
            sol+=A;
            ans++;
        }
        
        if(sol==B)
        {
            return ans;
        }
        if(solve(sol,B)==1)
        {
            return ans;
        }
        if(solve(sol+A,B)==1)
        {
            return ans+1;
        }
        return -1;
    }
};
