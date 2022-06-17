https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	//naive approach is just find the overlapiing interval
    	//we can do that by using two loops....i=0;j+i+1
    	//just check arr[i]>arr[j] && arr[i]<dep[j] || arr[j]>arr[i] && dep[i]>=arr[j]   
         // 	then only we will increase the count;
         
         
         //2nd approach is simple sort the both array and comapre them with departure time
         
        // Tc =o(2nlogn)+o(n) for sorting +traversal  sc o(1)
         sort(arr,arr+n);
         sort(dep,dep+n);
         
         int ans=1;
         int cnt=1;
         int i=1;
         int j=0;
         
         while(i<n and j<n){
             if(arr[i]<=dep[j]){
             cnt++;
             i++;
             }
             else{
                 cnt--;
                 j++;
             }
             ans=max(ans,cnt);
         }
    	return ans;
    }
};