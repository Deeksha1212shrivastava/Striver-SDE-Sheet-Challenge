https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#\

TC nlogn+o(m*n)
sc o(n)

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static comp(Job a,Job b){
        return (a.profit>b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort( arr,arr+n,comp);
       // To know the max deadline
       int max_deadline=arr[0].dead;
       for( int i=1;i<n;i++)
       {
           max_deadline=max(max_deadline,arr[i].dead);
       }
       
       
       int job_slot[max_deadline+1];
       for( int i=0;i<=max_deadline;i++)
       {
           job_slot[i]=-1;
       }
       
       int profit=0;
       int job_count=0;
       
       for( int i=0;i<n;i++)
       {
           for( int j=arr[i].dead;j>0;j--)
           {
               if( job_slot[j]==-1)
               {
                   job_slot[j]=i;
                   profit=profit+arr[i].profit;
                   job_count++;
                   break;
               }
           }
       }
       
       vector<int>result;
       // result.push_back(1);
       
       result.push_back(job_count);
       result.push_back(profit);
       
       return result;
    } 
};