class Solution{
  public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        priority_queue< pair<double,double> > A;
        for(int i=0;i<n;i++)
        {
            double a=arr[i].weight,b=(double)arr[i].value/a;
            A.push({b,a});
        }
        double ans=0;
        while(A.size()>0 && W>0)
        {
            double a=A.top().first,b=A.top().second;
            A.pop();
            if(W>b)
            {
                ans+=(a*b);
                W-=b;
            }
            else
            {
                ans+=(W*a);
                break;
            }
        }
        return ans;
        // Your code here
    }
}
