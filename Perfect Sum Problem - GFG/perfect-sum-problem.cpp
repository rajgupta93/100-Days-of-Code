// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

int dp[1000][1000];


void init(){
memset(dp,-1,sizeof(dp));
}
int mod=1000000007;
int l=0;
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        
        // Your code goes here
         if(l==0)
        {
            init();
            l++;
        }
         if(sum==0 &&n==0)
          { 
              return 1;}
        
        if(n==0)
            {return 0;}
            
            
        if(dp[n-1][sum]!=-1)
         {
             return dp[n-1][sum]%mod;}
            
       
       
        
        if(sum>=arr[n-1])
        {
            return  ((dp[n-1][sum]=(perfectSum(arr,n-1,sum))+(perfectSum(arr,n-1,sum-arr[n-1])))%mod);
        }else
        {
             return dp[n-1][sum]=(perfectSum(arr,n-1,sum)%mod);
        }
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends