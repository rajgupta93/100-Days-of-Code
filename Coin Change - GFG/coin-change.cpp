// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  long long  dp[1001][1001];
 int l=0;
 
    long long int count(int S[], int m, int n) {

        // code here.
 if(l==0)
 {
     memset(dp,-1,sizeof(dp));
     l++;
 }
        if(n==0)
        {
            return 1;
        }
        if(n<0||m==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        
        if(S[m-1]>n)
        {
            return dp[n][m]=count(S,m-1,n);
        }else
        {
           return dp[n][m]=count(S,m-1,n)+count(S,m,n-S[m-1]); 
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends