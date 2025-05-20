class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<(matrix[0].size())/2;i++){
            swap(matrix[i],matrix[(matrix[0].size())-i-1]);
        }
        for(int i=0;i<matrix[0].size();i++){
            for(int j=i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};