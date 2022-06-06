//https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems

int findDuplicate(vector<int> &arr, int n){
	
     unordered_map<int,int>mpp;
    int ans=0;
    for(auto it:arr){
        mpp[it]++;
        }
    for(auto it:mpp){
        if(it.second>1){
            ans=it.first;
            break;
        }
    }
    return ans;
}
