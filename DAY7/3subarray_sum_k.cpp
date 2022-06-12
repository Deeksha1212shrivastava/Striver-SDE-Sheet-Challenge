// https://leetcode.com/problems/subarray-sum-equals-k/

 //we can solve by using two loop but tc will be n^2 so we will use here hashmap tc is n
        //first we will check that sum is equal to k this shiw the subarray of single elemnt we will increase the count;
        //now we check sum-k if is pesent in hashmap increase the count or not if present ww willl add in hashmap
        

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)
            {
                count++;
            }
            if(mpp.find(sum-k)!=mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    }
};