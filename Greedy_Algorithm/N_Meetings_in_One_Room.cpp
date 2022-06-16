class Solution{
  public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> A;
        for(int i=0;i<n;i++)
        {
            A.push_back(make_pair(end[i],start[i]));
        }
        sort(A.begin(),A.end());
        int count=1,len=A[0].first;
        for(int i=1;i<n;i++)
        {
            if(A[i].second>len)
            {
                count++;
                len=A[i].first;
            }
        }
        return count;
        // Your code here
    }
}
