//https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = row;
        int n = row;

        for(int i=0; i<row; i++){
            for(int j=i; j<column; j++){
                if(i==j){
                    continue;
                }
                else{
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};