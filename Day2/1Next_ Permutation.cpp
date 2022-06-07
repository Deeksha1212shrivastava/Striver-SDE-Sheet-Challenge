// https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //1st approach is simple find all permutation  and find the que wala permutaion and return next of that
    //TC N!*N sc o(1)
   //2nd approach simple using inbuild function    ex. next_permutation(nums,nums+3);
   //3rd approach is below here
    //1.find where sorting is breaking 2.then find just bigger no of arr(i-1) then swap that and we will reversing the no after i-1;
    //TC 3*o(n) SC o(1)
    //  Write your code here.
    int cnt=1;
    for(int i=n-1;i>=0;i--){
        if(nums[i]<nums[i-1])
            cnt++;
    }
    if(cnt==n){
        reverse(nums.begin(),nums.end());
        return nums ;
    }
    //no check where sorting is breaking from back
    int i=n-1;
    while(i>0 and nums[i]<nums[i-1]){
        i--;
    }
    
    for(int j=n-1;j>=i;j--){
        if(nums[j]>nums[i-1]){
            swap(nums[j],nums[i-1]);
            break;
        }
    }
    
    reverse(nums.begin()+i,nums.end());
        return nums;
}