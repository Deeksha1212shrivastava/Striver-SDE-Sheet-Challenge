// https://leetcode.com/problems/combination-sum-ii/

//brute force can be the some modification of combination 1 in which we will just use hashset for removing duplicate 

//here we check at every index that it is equal to previous or not  ..,i>ind and arr[i]==arr[i-1] this condtion is main TC o(2^n*k) and SC o(k*n);
//n is no of combination k is avg length of ds
class Solution {
    public:
    
    void findcombination(int ind ,int target,vector<int>& arr, vector<vector<int>>&ans,vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
     }
            
        for(int i=ind;i<arr.size();i++){
            if(i>ind and arr[i]==arr[i-1]) continue;
            
            if(arr[i]>target) break;
            
            ds.push_back(arr[i]);
            
            findcombination(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
             
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>ds;
        
        findcombination(0,target,arr,ans,ds);
        return ans;
    }
};