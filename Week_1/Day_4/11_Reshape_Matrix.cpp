class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        if(r * c != rows * cols) {
            return mat;
        }
        
        std::vector<std::vector<int>> re(r, std::vector<int>(c));
        
        int i = 0, j = 0;
        for(int k = 0; k < r; k++) {
            for(int l = 0; l < c; l++) {
                re[k][l] = mat[i][j];
                j++;
                if(j >= cols) {
                    i++;
                    j = 0;
                }
            }
        }
        return re;
    }
};