// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	#define mod 1000000007
		int nthPoint(int n){
		    // Code here
		    int dp[n]={0};
		    
		    dp[0]=1;
		    dp[1]=1;
		    dp[2]=2;
		    
		    for(int i=3;i<=n;i++){
		        dp[i]=dp[i-1]%mod+dp[i-2]%mod;
		        dp[n]=dp[n]%mod;
		    }
		    return dp[n]%mod;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends