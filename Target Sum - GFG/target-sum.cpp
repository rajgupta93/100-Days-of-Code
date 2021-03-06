// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  
  int  dp[21][20000];
  int findtarg(vector<int>&A ,int target,int n)
  {
      if(n==0 && target==0)
        return 1;
        
        if(n==0)
            return 0;
            
            if(dp[n][target]!=-1)
                return dp[n][target];
            
        return dp[n][target]= (findtarg(A,target+A[n-1],n-1) + findtarg(A,target-A[n-1],n-1));
  }
  
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        // int dp[A.size()+1][target+1];
        memset(dp,-1,sizeof(dp));
    return    findtarg(A,target,A.size());
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends