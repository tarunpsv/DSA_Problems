class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> A;
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int,int>>> Q;
        Q.push({root,{0,0}});
        while(Q.size()>0)
        {
            TreeNode* top=Q.front().first;
            int pos=Q.front().second.first,height=Q.front().second.second;
            Q.pop();
            A[pos][height].insert(top->val);
            if(top->left)
            {
                Q.push({top->left,{pos-1,height+1}});
            }
            if(top->right)
            {
                Q.push({top->right,{pos+1,height+1}});
            }
        }
        for(auto it=A.begin();it!=A.end();it++)
        {
            vector<int> sol;
            for(auto ij=it->second.begin();ij!=it->second.end();ij++)
            {
                sol.insert(sol.end(),ij->second.begin(),ij->second.end());
                /*for(auto ik=ij->second.begin();ik!=ij->second.end();ik++)
                {
                    sol.push_back(*ik);
                }*/
            }
            ans.push_back(sol);
        }
        return ans;
    }
};
