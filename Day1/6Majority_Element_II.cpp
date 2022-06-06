// https://www.codingninjas.com/codestudio/problems/majority-element-ii_893027?topList=striver-sde-sheet-problems


vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int>mpp;
        vector<int>v;
        int t=0;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
             }
   for(auto it:mpp){
       if(it.second>(arr.size()/3))
           v.push_back(it.first);
   }
        return v;

}