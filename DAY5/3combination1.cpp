

https://leetcode.com/problems/combination-sum/

 void findcombination(int idx,int target,vector<int>& arr,vector<vector<int>>&ans,vector<int>& ds){
        //base case
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up the element
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findcombination(idx,target-arr[idx],arr,ans,ds);
            ds.pop_back();
        }
        
        //not pick
        findcombination(idx+1,target,arr,ans,ds);
        
       
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombination(0,target,candidates,ans,ds);
        
        return ans;
    }
