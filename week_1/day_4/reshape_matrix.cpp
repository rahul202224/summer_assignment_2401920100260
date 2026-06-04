class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int n = mat.size();
       int m = mat[0].size();
       
       vector<vector<int>>res_mat(r, vector<int>(c)) ;
        
        if(r*c == n*m)
        {
            for(int i=0;i<n*m;i++)
            {
                  res_mat[i/c][i%c]= mat[i/m][i%m] ;
                
            }
            
            return res_mat ;
            
        }
        else
        {
            return mat ;
        }
        
    }
};