 #include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&Arr, int k)
{
    priority_queue< pair<int,pair<int,int>>,vector< pair<int,pair<int,int>> >,greater< pair<int,pair<int,int>> > >A;
    for(int i=0;i<k;i++)
    {
        if(Arr[i].size()>0)
        {
            A.push({Arr[i][0],{0,i}});
        }
    }
    vector<int> ans;
    while(A.size()>0)
    {
        int a=A.top().first,b=A.top().second.first,c=A.top().second.second;
        A.pop();
        ans.push_back(a);
        if(Arr[c].size()>b+1)
        {
            A.push({Arr[c][b+1],{b+1,c}});
        }
    }
    return ans;
    // Write your code here. 
}
