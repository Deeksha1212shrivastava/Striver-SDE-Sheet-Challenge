//https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
   int mini=prices[0];
    int maxi=0;
    for(int i=1;i<prices.size();i++){
        mini=min(mini,prices[i]);
        maxi=max(maxi,(prices[i]-mini));
    }
    return maxi;
}