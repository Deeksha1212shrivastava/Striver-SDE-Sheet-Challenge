
https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       //first store the frequency in map
        //then put in min heap so in bottom ,heap will have most frequent elemnt
        unordered_map<int,int>mpp;
        
        for(auto it:nums){
            mpp[it]++;
        }
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
         priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
        for(auto it:mpp){
            // int first=mpp.second;
            // int second=mpp.first;
            pq.push({it.second,it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};