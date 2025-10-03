class Solution {
public:
    
    void transpose(vector<vector<int>>& matrix)
    {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
      int m=matrix.size(),n=matrix[0].size();
      transpose(matrix);
      for(int i=0;i<m;i++)
      {
       
        reverse(matrix[i].begin(),matrix[i].end());
     
      }
    }
};