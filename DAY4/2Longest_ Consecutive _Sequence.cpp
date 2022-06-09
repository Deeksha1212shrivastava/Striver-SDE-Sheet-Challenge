https://leetcode.com/problems/longest-consecutive-sequence/

//brute force Tc nlogn sc o(1)
int longestConsecutive(vector<int> nums) {
        if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        int prev = nums[0];
        int cur = 1;
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == prev+1){
                cur++;
            }
            else if(nums[i] != prev){
                cur = 1;
            }
            prev = nums[i];
            ans = max(ans, cur);
        }
        return ans;
    }
    //optimal approach tc o(n) sc o(n)
    //we search for x-1 because we want to take no in serial so if we get x+1 then we start increasing no;
     int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num:nums){
            s.insert(num);
        }
        int maxi=0;
        for(auto x:s){
            if(s.count(x-1))  continue;
            
            int curr=1;
            while(s.count(x+curr)){
                curr++;
         }
            
          maxi=max(maxi,curr);  
        }
        
        return maxi;
    }