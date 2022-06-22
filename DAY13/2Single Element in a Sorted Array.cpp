https://leetcode.com/problems/single-element-in-a-sorted-array/


class Solution {
public:
    
    //1st approach is using xor of all elemnts
    //2nd is using binary search divide the array into two parts
    //in left half  1st instance is on even index and second instance is on odd index;
    //in right half first is on odd index and second is on even index
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-2;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(mid%2==0){
               if(nums[mid]!=nums[mid+1])
                   high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(nums[mid]==nums[mid+1])
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        return nums[low];
    }
};