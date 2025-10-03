class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<vector<int>> ans=mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    fill(ans[i].begin(),ans[i].end(),0);
                    for(int k=0;k<mat.size();k++)
                        ans[k][j]=0;
                    
                }
            }
        }
        mat=ans;
        
    }
};