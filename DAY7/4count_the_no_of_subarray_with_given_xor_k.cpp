// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int>mpp;
    int res=0;
    long long count=0;
    for(int i=0;i<A.size();i++){
        res^=A[i];
        if(res==B)
        count++;
        
        int h=res^B;
        if(mpp.find(h)!=mpp.end()){
            count+=mpp[h];
        }
        mpp[res]++;
    }
    return count;
}
