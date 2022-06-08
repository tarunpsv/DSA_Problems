class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int left=0,top=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0)
                    {
                        top=1;
                    }
                    if(j==0)
                    {
                        left=1;
                    }
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        if(top==1)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[0][i]=0;
            }
        }
        if(left==1)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};
