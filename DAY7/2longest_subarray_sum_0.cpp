// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
//         int  maxi = 0;
// 	for(int i = 0; i < n; ++i){
// 		int sum = 0;
// 		for(int j = i; j < n; ++j){
// 			sum += A[j];
// 			if(sum == 0){
// 				maxi= max(maxi, j-i+1);
// 			}
// 		}
//     }
//     return maxi;

//optimised so;ution is using hashmap in which we will keep the prefix sum 

unordered_map<int,int>mpp;
int sum=0;
int maxi=0;

for(int i=0;i<A.size();i++){
    sum+=A[i];
    if(sum==0){
        maxi=i+1;
    }
    else{
        if(mpp.find(sum)!=mpp.end()){
            maxi=max(maxi,i-mpp[sum]);
        }
        else{
            mpp[sum]=i;
        }
    }