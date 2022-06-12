// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //brute force is using set TC o(m*n) SC o(m+n)
        
//         int R=matrix.size();
//         int C=matrix[0].size();
        
//        set<int>rows;
//         set<int>cols;
//         //we mark the rows and columns that are to be zero
//         for(int i=0;i<R;i++){
//             for(int j=0;j<C;j++){
//                 if(matrix[i][j]==0){
//                     rows.insert(i);
//                     cols.insert(j);
//                 }
//             }
//         }
//         for(int i=0;i<R;i++){
//             for(int j=0;j<C;j++){
//                 if(rows.count(i) || cols.count(j)){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
        //optimal approach 
        
        
          int n = matrix.size();
        int m = matrix[0].size();
        bool firstRow = false;  // do we need to set first row zero
        bool firstCol = false;  // do we need to ser first col zero
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
					if(matrix[i][j] == 0){   // store rows and cols state in first row and col
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        // cout<<firstRow<<" "<<firstCol<<endl;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<m;i++) matrix[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<n;i++) matrix[i][0] = 0;
        }
    
        //TC o(m*n) SC o(1)
    }
};