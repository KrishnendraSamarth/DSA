class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      vector<vector<int>> ans = matrix;
      int m = matrix.size(),n=matrix[0].size();
      int p=0,q=n-1;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            ans[p][q]=matrix[i][j];
            p++;
        }
        p=0;
        q--;
      } 
      matrix=ans; 
    }
};