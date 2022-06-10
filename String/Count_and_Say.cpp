class Solution {
public:
    string countAndSay(int n) {
        string a,b;
        a="1";
        for(int i=2;i<=n;i++)
        {
            int j=0;
            while(j<a.length())
            {
                int count=0;
                char c=a[j];
                while(j<a.length() && a[j]==c)
                {
                    count++;
                    j++;
                }
                b+=to_string(count);
                b+=c;
            }
            a=b;
            b="";
        }
        return a;
    }
};
