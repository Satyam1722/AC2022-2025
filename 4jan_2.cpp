class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

      int n=matrix.size();

      for(int i=0;i<n;i++)
      {
          for(int j=0;i>j;j++)
          {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;      
          }
      }

      for(int i=0;i<n;i++)
      {
          int s=0,e=n-1;
          while(s<e)
          {
            int temp=matrix[i][s];
            matrix[i][s]=matrix[i][e];
            matrix[i][e]=temp;  
            s++;
            e--;
          }
      }
      
      
    }
};