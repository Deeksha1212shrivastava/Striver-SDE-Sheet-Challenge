// https://www.codingninjas.com/codestudio/problems/merge-intervals_699917?topList=striver-sde-sheet-problems

vector<vector<int>> mergeIntervals(vector<vector<int>> &interval)
{
    // Write your code here.
  
    
     //brute force will we first sort the intervals,then leanearly traverse and check each interval with remaining all         interval  so TC o(n^2)*nlogn for sorting
        
        vector<vector<int>>res;
        if(interval.size()==0)
            return res;
        sort(interval.begin(),interval.end());
        vector<int>temp=interval[0];//for traversing every time
        // temp.push_back(interval[0]);
        for(auto it:interval){
            if(it[0]<=temp[1]){
                temp[1]=max(temp[1],it[1]);
            }
            else{
                res.push_back(temp);
                temp=it;//qki temp hi to peeche wale interval ka kam kar rha h na jab koi interval merge nhi ho rhe h tab 
                //y funda lgega
                
            }
            
        }
        res.push_back(temp);//qki y last h to isko alg s insert krna pdega n bad m
        
        return res;
    
}