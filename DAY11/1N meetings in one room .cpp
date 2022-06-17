https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        // TC =o(n)+o(nlogn)+o(n);
        // SC=o(1);
        
        int cnt=1;
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        
        int limit=v[0].first;
        
        for(int i=1;i<n;i++){
            if(v[i].second>limit){
                cnt++;
                limit=v[i].first;
            }
        }
        return cnt;
    }
};