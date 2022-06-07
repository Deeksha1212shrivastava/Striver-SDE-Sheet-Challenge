// https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    //here we just have to check which one is larger from back we will push back that elementin array1[k]
    
    while(j>=0){
        if(i>=0 and arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }
        else{
            arr1[k--]=arr2[j--];
        }
    }
    return arr1;
}