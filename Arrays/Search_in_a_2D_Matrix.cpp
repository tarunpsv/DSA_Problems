class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int target) {
        int a=A.size(),b=A[0].size(),i=0,j=b-1;
        while(i<a && j>=0)
        {
            if(A[i][j]==target)
            {
                return 1;
            }
            else if(A[i][j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return 0;
    }
};
