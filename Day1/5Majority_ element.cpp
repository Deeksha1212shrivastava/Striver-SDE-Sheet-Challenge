//https://www.codingninjas.com/codestudio/problems/majority-element_842495?topList=striver-sde-sheet-problems

int findMajorityElement(int nums[], int n) {
	// Write your code here.
    unordered_map<int,int>mpp;
        
        int t=-1;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            
            if(mpp[nums[i]]>n/2){
                t= nums[i];
                break;
            }
        }
        return t;
}