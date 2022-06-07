// https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=striver-sde-sheet-problems
//this is a kadane algorithm

long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
     long long sum=0;
       long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
    if(sum<=0) return 0;
    else
        return maxi;
    
}