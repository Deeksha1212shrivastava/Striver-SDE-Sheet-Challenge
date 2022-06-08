// https://leetcode.com/problems/4sum/ 

// first approach is using three loops

// better approach is using three pointer Tc nlogn+o(n^2);

 vector<vector<int>> fourSum(vector<int>& num, int target) {
      vector<vector<int>> res;
        if(num.empty()) return res;
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
          int  target3=target-num[i];
            for(int j=i+1;j<n;j++){
             int   target2=target3-num[j];
                
                int front=j+1;
                int back=n-1;
                
                while(front<back){
                    int two_sum=num[front]+num[back];
                    if(two_sum<target2) front++;
                    else if(two_sum>target2) back--;
                    else{
                        vector<int>q(4,0);
                        q[0]=num[i];
                        q[1]=num[j];
                        q[2]=num[front];
                        q[3]=num[back];
                        res.push_back(q);
                        
                        //processing for duplicate of no 3
                        while(front<back and num[front]==q[2]) front++;
                        
                        //processing for duplicate of no 4
                        while(front<back and num[back]==q[3]) back--;
                      
                    }
                }
//                 //processing for duplicate of no 2
                while(j+1<n and num[j+1]==num[j]) j++;
                  //processing for duplicate of no 1
                while(i+1<n and num[i+1]==num[i]) i++;
            }
            }
        
        return res;
    }