// https://leetcode.com/problems/search-a-2d-matrix/

//approach brute force 
//2nd approach using binary serach

bool searchMatrix(vector<vector<int>>& mat, int target) {
        //brute force matrix[i][j]==target return true;
        //2nd approach is binary search
        int lo=0;
        int hi=(mat.size()*mat[0].size())-1;
        if(!mat.size()) return false;
        while(lo<=hi){
            int mid =(lo+(hi-lo)/2);
            if(mat[mid/(mat[0].size())][mid%(mat[0].size())]==target){
                return true;
            }
             if(mat[mid/mat[0].size()][mid%mat[0].size()]<target){
                 lo=mid+1;
             }
            else{
                hi=mid-1;
            }
        }
        return false;
    }


    //3rd approach using 2 pointer TC o(n)
     bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int rows = matrix.size(),
			cols = matrix[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        
        return false;
    }