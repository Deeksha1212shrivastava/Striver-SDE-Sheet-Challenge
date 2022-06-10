// https://leetcode.com/problems/subsets-ii/

class Solution {
    private:
    //TC o(2^n*n)
    //Sc O(2^n)*O(k)
    void findsubset(int ind,vector<int>& nums,vector<int>& ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        
        for(int i=ind;i<nums.size();i++){
            if(i!=ind and nums[i]==nums[i-1]) continue;
            
            ds.push_back(nums[i]);
            findsubset(i+1,nums,ds,ans);
            ds.pop_back();
        }
        
    }
    public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //brute force will be as we create subset we will push them in a set so duplicate will not repeat and after that whole set will push in the vector of vector  but TC will be much high
        //TC o(2^n*klogx) 2^n for power set klogx for set and SC o(2^n*k)
        
    //optimal approach is just modify the brute force instead of taking set we will run a loop in which we will check at every position that i!=ind and nums[i]==nums[i-1] so we will not take that because that will create duplicate subset if i==ind it means that is appearing first time so will take that
        
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        findsubset(0,nums,ds,ans);
        
        return ans;
    }