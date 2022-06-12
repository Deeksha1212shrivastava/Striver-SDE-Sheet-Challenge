// https://leetcode.com/problems/longest-substring-without-repeating-characters/

//brute force using two loops;

int solve(string str) {
  int maxans = INT_MIN;
  for (int i = 0; i < str.length(); i++)
  {
    unordered_set < int > set;
    for (int j = i; j < str.length(); j++) 
    {
      if (set.find(str[j]) != set.end()) 
      {
        maxans = max(maxans, j - i);
        break;
      }
      set.insert(str[j]);
    }
  }
  return maxans;
}


//1st optimal; tc 0(2n) sc o(n)
int solve(string str) {
  int maxans = INT_MIN;
  unordered_set < int > set;
  int l = 0;
  for (int r = 0; r < str.length(); r++) 
    if (set.find(str[r]) != set.end())
    {
      while (l < r && set.find(str[r]) != set.end()) {
        set.erase(str[l]);
        l++;
      }
    }
    set.insert(str[r]);
    maxans = max(maxans, r - l + 1);
  }
  return maxans;
}


//3rd optimal
//TC o(n) sc o(n)

  int lengthOfLongestSubstring(string s) {
        // vector<int>mpp(256,-1);//we can alsomake unordered_map<char,int>mpp
        unordered_map<char,int>mpp;
        int left=0;
        int right=0;
        int n=s.size();
        int len=0;
        while(right<n){
            if(mpp.find(s[right])!=mpp.end())
                left=max(mpp[s[right]]+1,left);
            
            mpp[s[right]]=right;
            
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
    //TC =o(n)
    //sc=o(n)
};
