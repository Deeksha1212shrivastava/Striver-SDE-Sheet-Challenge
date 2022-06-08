// https://leetcode.com/problems/rotate-image/

//first we reverse the array row wise then swap the values;
//for rotating clockwise

void rotate(vector<vector<int>>& matrix) {
        //for reversing rotating matrix clockwise
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
         
   
}

//for rotating anticlockwise
//first we reverse the matrix column wise and reverse that
// void anti_rotate(vector<vector<int> > &matrix) {
//     for (auto vi : matrix) reverse(vi.begin(), vi.end());
//     for (int i = 0; i < matrix.size(); ++i) {
//         for (int j = i + 1; j < matrix[i].size(); ++j)
//             swap(matrix[i][j], matrix[j][i]);
//     }
// }