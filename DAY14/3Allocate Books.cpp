https://www.interviewbit.com/problems/allocate-books/

bool ispossible(vector<int> &A, int B , int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<A.size();i++){
        if(pagesum+A[i]<=mid){
            pagesum+=A[i];
        }
        else{
            studentcount++;
            if(studentcount>B || A[i]>mid){
                return false;
            }
            pagesum=A[i];
        }
    }
    return true;
}


int Solution::books(vector<int> &A, int B) {
    int s=0;
    int sum=0;
    if(B>A.size()) return -1;
    
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(A,B,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}
